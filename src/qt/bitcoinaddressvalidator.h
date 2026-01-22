// Copyright (c) 2011-2014 The marsbux Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef marsbux_QT_marsbuxADDRESSVALIDATOR_H
#define marsbux_QT_marsbuxADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class marsbuxAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit marsbuxAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** marsbux address widget validator, checks for a valid marsbux address.
 */
class marsbuxAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit marsbuxAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // marsbux_QT_marsbuxADDRESSVALIDATOR_H
