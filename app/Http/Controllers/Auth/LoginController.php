<?php

namespace App\Http\Controllers\Auth;

use App\Http\Controllers\Controller;
use App\Providers\RouteServiceProvider;
use App\User;
use Illuminate\Foundation\Auth\AuthenticatesUsers;
use Illuminate\Support\Facades\Auth;
use Laravel\Socialite\Facades\Socialite;

class LoginController extends Controller
{
    /*
    |--------------------------------------------------------------------------
    | Login Controller
    |--------------------------------------------------------------------------
    |
    | This controller handles authenticating users for the application and
    | redirecting them to your home screen. The controller uses a trait
    | to conveniently provide its functionality to your applications.
    |
    */

    use AuthenticatesUsers;

    /**
     * Where to redirect users after login.
     *
     * @var string
     */
    protected $redirectTo = RouteServiceProvider::HOME;

    /**
     * Create a new controller instance.
     *
     * @return void
     */
    public function __construct()
    {
        $this->middleware('guest')->except('logout');
    }


    //login google
    public function redirectToGoogle()
    {
        return Socialite::driver('google')->redirect();
    }
    // login google callback
    public function handleGoogleCallback()
    {
        $user = Socialite::driver('google')->user();

        $this->_registerOrLoginUser($user);
        
        return redirect()->route('home');
        // $user->token;
    }
    
     //login facebook
     public function redirectToFacebook()
     {
         return Socialite::driver('facebook')->redirect();
     }
     // login facebook callback
     public function handleFacebookCallback()
     {
         $user = Socialite::driver('facebook')->user();
 
         // $user->token;
     }

       //login github
       public function redirectToProvider()
       {
           return Socialite::driver('github')->redirect();
       }
       // login github callback
       public function handleProviderCallback()
       {
           $user = Socialite::driver('github')->user();
   
           // $user->token;
       }

       protected function _registerOrLoginUser($data){
           $user = User::where('email','=', $data->email)->first();
           if(!$user){
               $user = new User;
               $user->name = $data->name;
               $user->email = $data->email;
               $user->provider_id= $data->id;
               $user->avatar = $data->avatar;
               $user->save();
           }

           Auth::login($user);
       }


}
