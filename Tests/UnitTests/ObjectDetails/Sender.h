/****************************************************************************
**
** Copyright (C) VCreate Logic Private Limited, Bangalore
**
** Use of this file is limited according to the terms specified by
** VCreate Logic Private Limited, Bangalore.  Details of those terms
** are listed in licence.txt included as part of the distribution package
** of this file. This file may not be distributed without including the
** licence.txt file.
**
** Contact info@vcreatelogic.com if any conditions of this licensing are
** not clear to you.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
****************************************************************************/

#ifndef SENDER_H
#define SENDER_H

#include <QObject>

class Sender : public QObject
{
    Q_OBJECT

public:
    Sender(QObject *parent=0) : QObject(parent) { }
    ~Sender() { }

    void sendEmptySignal() { emit emptySignal(); }
    void sendStringSignal(const QString &signal) { emit stringSignal(signal); }
    void sendIntegerSignal(int val) { emit integerSignal(val); }

signals:
    void emptySignal();
    void stringSignal(const QString &signal);
    void integerSignal(int val);
};

#endif // SENDER_H
