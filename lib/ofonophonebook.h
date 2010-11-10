/*
 * This file is part of ofono-qt
 *
 * Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * Contact: Alexander Kanavin <alexander.kanavin@nokia.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

#ifndef OFONOPHONEBOOK_H
#define OFONOPHONEBOOK_H

#include <QtDBus/QtDBus>
#include <QtCore/QObject>
#include "ofonomodeminterface.h"
#include "libofono-qt_global.h"

class OFONO_QT_EXPORT OfonoPhonebook : public OfonoModemInterface
{

Q_OBJECT

public:

    OfonoPhonebook(QString modemId, QObject *parent);

    ~OfonoPhonebook();

    void requestImport();

signals:
    void importComplete(bool success, QString entries);

private slots:
    void importResp(QString entries);
    void importErr(const QDBusError& error);

private:

};
#endif
