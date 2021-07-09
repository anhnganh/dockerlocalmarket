<?php

namespace App\Http\Controllers;

use App\Http\Requests\ApiLoginRequest;
use App\Http\Requests\ApiRegisterRequest;
use App\User;
use Illuminate\Http\Request;
use Illuminate\Support\Facades\Auth;
use Illuminate\Support\Facades\Hash;

class ApiUserController extends Controller
{
    //
    public function register(ApiRegisterRequest $request)
    {
        $user = new User;
        $user->fill($request->all());
        $user->password = Hash::make($request->password);
        $user->save();
        return response()->json($user);
    }
    public function login(ApiLoginRequest $request)
    {
        if (Auth::attempt(array('email' => $request->email, 'password'=>$request->password))) {
           $user = User::whereEmail($request->email)->first();
           $user -> token = $user->createToken('App')->accessToken;
           return response()-> json($user);
        } else {
            return "Wrong Credentials";
        }
    }
    public function userInfo(Request $request){
        return response()->json($request->user('api'));
    }
}
