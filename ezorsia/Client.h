#pragma once
class Client
{
public:
	static void EnableNewIGCipher();
	static void UpdateResolution();
	static void UpdateLogin();
	static const int m_nIGCipherHash = 0XC65053F2;
	static const int m_nGameHeight = 768;
	static const int m_nGameWidth = 1024;
};