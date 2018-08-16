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
