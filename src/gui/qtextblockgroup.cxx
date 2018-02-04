//  header block begin
// /usr/include/qt/QtGui/qtextobject.h
#include <qtextobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextBlockGroup is pure virtual: false
// QTextBlockGroup has virtual projected: true
//  header block end

//  main block begin

class MyQTextBlockGroup : public QTextBlockGroup {
public:
  virtual ~MyQTextBlockGroup() {}
// void QTextBlockGroup(class QTextDocument *)
MyQTextBlockGroup(QTextDocument * doc) : QTextBlockGroup(doc) {}
// void ~QTextBlockGroup()
// void blockInserted(const class QTextBlock &)
  virtual void blockInserted(const QTextBlock & block) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"blockInserted", &handled, 1, (uint64_t)&block, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextBlockGroup::blockInserted(block);
  }
  }
// void blockRemoved(const class QTextBlock &)
  virtual void blockRemoved(const QTextBlock & block) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"blockRemoved", &handled, 1, (uint64_t)&block, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextBlockGroup::blockRemoved(block);
  }
  }
// void blockFormatChanged(const class QTextBlock &)
  virtual void blockFormatChanged(const QTextBlock & block) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"blockFormatChanged", &handled, 1, (uint64_t)&block, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextBlockGroup::blockFormatChanged(block);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:92
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK15QTextBlockGroup10metaObjectEv(void *this_) {
  return (void*)((QTextBlockGroup*)this_)->metaObject();
}
//  main block end
