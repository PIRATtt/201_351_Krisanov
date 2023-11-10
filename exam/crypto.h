#ifndef CRYPTO_H
#define CRYPTO_H

#include <QObject>
#include <QDebug>
#include <QFile>
#include <openssl\evp.h>
#include <openssl\err.h>
#include <QJsonArray>   //
#include <QJsonObject>  // Для работы с Json форматом
#include <QJsonDocument>//
#include "QByteArray"
#include "QString"

struct Person {
public:
    QString gun;
    int hp;
    float dist;
};

class crypto
{
public:
    crypto();
    // Шифрование числа
    static QString encrypt(QString num, const QByteArray &key);
    // Дешифрование числа
    static QString decrypt(QString record, const QByteArray &key);

    constexpr static unsigned char m_iv[17] = "65e84be33532fb78";
};

#endif // CRYPTO_H
