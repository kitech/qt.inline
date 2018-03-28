//  header block begin
// /usr/include/qt/QtGui/qtextobject.h
#ifndef protected
#define protected public
#endif
#include <qtextobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextBlockGroup is pure virtual: false
// QTextBlockGroup has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextBlockGroup : public QTextBlockGroup {
public:
// void QTextBlockGroup(QTextDocument *)
MyQTextBlockGroup(QTextDocument * doc) : QTextBlockGroup(doc) {}
// Protected virtual Visibility=Default Availability=Available
// void ~QTextBlockGroup()
// Protected virtual Visibility=Default Availability=Available
// void blockInserted(const QTextBlock &)
  virtual void blockInserted(const QTextBlock & block) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"blockInserted", &handled, 1, (uint64_t)&block, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextBlockGroup::blockInserted(block);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void blockRemoved(const QTextBlock &)
  virtual void blockRemoved(const QTextBlock & block) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"blockRemoved", &handled, 1, (uint64_t)&block, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextBlockGroup::blockRemoved(block);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void blockFormatChanged(const QTextBlock &)
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

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:98
// [-2] void blockInserted(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextBlockGroup13blockInsertedERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QTextBlockGroup*)this_)->QTextBlockGroup::blockInserted(*block);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:99
// [-2] void blockRemoved(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextBlockGroup12blockRemovedERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QTextBlockGroup*)this_)->QTextBlockGroup::blockRemoved(*block);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:100
// [-2] void blockFormatChanged(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextBlockGroup18blockFormatChangedERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QTextBlockGroup*)this_)->QTextBlockGroup::blockFormatChanged(*block);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:92
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTextBlockGroup10metaObjectEv(void *this_) {
  return (void*)((QTextBlockGroup*)this_)->metaObject();
}

//  main block end
