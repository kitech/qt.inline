
#include <QtCore>
#include <QtNetwork>
#include <QtGui>
#include <QtQml>
#include <QtQuick>
#include "hidden_symbols.h"
//  header block end

//  main block begin
// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:193
// [-2] void qsgnode_set_description(class QSGNode *, const class QString &)
extern "C" Q_DECL_EXPORT
void C_Z23qsgnode_set_descriptionP7QSGNodeRK7QString(QSGNode * node, QString* description) {
  qsgnode_set_description(node, *description);
}

//  main block end
