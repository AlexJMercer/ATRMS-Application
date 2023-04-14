#pragma once

using namespace System;

public ref class User
{
public:
	int ID;
	String^ name;
	String^ username;
	String^ password;
	int usertype;
	int accesslevel;
};