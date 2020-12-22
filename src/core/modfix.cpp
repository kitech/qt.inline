#include <QtCore>

extern "C" Q_DECL_EXPORT
const char *C_qVersion() { return qVersion(); }

extern "C" Q_DECL_EXPORT
QObject* C_QObject_findChild(void* this_, const char* name, int options) {
    QString dname;
    Qt::FindChildOptions doptions = Qt::FindChildrenRecursively;
    if (name != NULL) { dname = QString(name); } 
    if (options >= 0) { doptions = (Qt::FindChildOptions)options ;}
    return ((QObject*)this_)->findChild<QObject*>(dname, doptions);
}

extern "C" Q_DECL_EXPORT
QList<QObject*>* C_QObject_findChildren(void* this_, const char* name, int options) {
    QString dname;
    Qt::FindChildOptions doptions = Qt::FindChildrenRecursively;
    if (name != NULL) { dname = QString(name); }
    if (options >= 0) { doptions = (Qt::FindChildOptions)options ;}
    auto rv = ((QObject*)this_)->findChildren<QObject*>(dname, doptions);
    return new decltype(rv)(rv);
}

extern "C" Q_DECL_EXPORT
char* C_QMetaObject_getEnumItemName(void* this_, char* enumName,  int value) {
    QMetaObject* rthis = (QMetaObject*)this_;
    int enumIdx = rthis->indexOfEnumerator(enumName);
    if (enumIdx == -1) {
        return 0;
    }
    QMetaEnum e = rthis->enumerator(enumIdx);
    return (char*)e.valueToKey(value);
}

extern "C" Q_DECL_EXPORT
int C_dump_comandline() {
    QStringList args = QCoreApplication::arguments();
    qDebug()<<args.length()<<args;
    return args.length();
}
