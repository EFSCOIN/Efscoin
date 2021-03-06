#ifndef UTIL_H
#define UTIL_H

#include <QString>
#include <QByteArray>
#include <QVariant>

/*
 * Convenience functions
 *
 * Author: Jean Wallet
 * Maintained by EFSCOIN Efs
 *
 * See LICENSE.txt for license details
 */

QByteArray getFileContents(const QString &filename);
void putFileContents(const QString &filename, const QByteArray &data);
bool backupFile(const QString &filename, const QString &ext="bak");
void getOverscan(int &top, int &bottom, int &left, int &right);
bool nameMatchesRiscOS(const QString &name);
uint readBoardRevision();
bool canBootOs(const QString& name, const QVariantMap& values);
void setRebootPartition(QByteArray partition);
QByteArray partdev(const QString &drivedev, int nr);
QByteArray sysclassblock(const QString &drivedev, int partnr = -1);

QByteArray getLabel(const QString part);
QByteArray getUUID(const QString part);
QByteArray getDiskId(const QString &device);
QByteArray getPartUUID(const QString &devpart);

#endif // UTIL_H
