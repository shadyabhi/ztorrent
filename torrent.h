#ifndef TORRENT_H
#define TORRENT_H

#include <QDomElement>
#include <QString>

class Torrent : public QDomElement
{
public:
    Torrent(QDomElement elem);

    inline QString property(QString tag) { return firstChildElement(tag).text(); }

    inline QString operator[](const QString& key) { return property(key); }

private:
    void addChild(QString tagName, QString text);
};

#endif // TORRENT_H