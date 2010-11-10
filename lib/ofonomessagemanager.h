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
 
#ifndef OFONOMESSAGEMANAGER_H
#define OFONOMESSAGEMANAGER_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "ofonomodeminterface.h"
#include "libofono-qt_global.h"

class OFONO_QT_EXPORT OfonoMessageManager : public OfonoModemInterface
{
    Q_OBJECT

public:
    OfonoMessageManager(QString modemId, QObject *parent=0);
    ~OfonoMessageManager();

    /* Properties */
    void requestServiceCenterAddress();
    void setServiceCenterAddress(QString address);

signals:
    void serviceCenterAddressChanged(QString address);
    void setServiceCenterAddressFailed();
    
    void serviceCenterAddressComplete(bool success, QString address);

private slots:
    void propertyChanged(const QString& property, const QVariant& value);
    void setPropertyFailed(const QString& property);
    void requestPropertyComplete(bool success, const QString& property, const QVariant& value);
};

#endif  /* !OFONOMESSAGEMANAGER_H */
