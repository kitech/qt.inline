//  header block begin
// /usr/include/qt/QtGui/qsyntaxhighlighter.h
#include <qsyntaxhighlighter.h>
#include <QtGui>
#include "callback_inherit.h"

// QSyntaxHighlighter is pure virtual: true
// QSyntaxHighlighter has virtual projected: true
//  header block end

//  main block begin

class MyQSyntaxHighlighter : public QSyntaxHighlighter {
public:
  virtual ~MyQSyntaxHighlighter() {}
// void QSyntaxHighlighter(class QObject *)
MyQSyntaxHighlighter(QObject * parent) : QSyntaxHighlighter(parent) {}
// void QSyntaxHighlighter(class QTextDocument *)
MyQSyntaxHighlighter(QTextDocument * parent) : QSyntaxHighlighter(parent) {}
// void highlightBlock(const class QString &)
  virtual void highlightBlock(const QString & text) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"highlightBlock", &handled, 1, (uint64_t)&text, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSyntaxHighlighter::highlightBlock(text);
  }
  }

// void setFormat(int, int, const class QTextCharFormat &)
  virtual void setFormat(int start, int count, const QTextCharFormat & format) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setFormat", &handled, 3, (uint64_t)start, (uint64_t)count, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSyntaxHighlighter::setFormat(start, count, format);
  }
  }

// void setFormat(int, int, const class QColor &)
  virtual void setFormat(int start, int count, const QColor & color) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setFormat", &handled, 3, (uint64_t)start, (uint64_t)count, (uint64_t)&color, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSyntaxHighlighter::setFormat(start, count, color);
  }
  }

// void setFormat(int, int, const class QFont &)
  virtual void setFormat(int start, int count, const QFont & font) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setFormat", &handled, 3, (uint64_t)start, (uint64_t)count, (uint64_t)&font, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSyntaxHighlighter::setFormat(start, count, font);
  }
  }

// QTextCharFormat format(int)
  virtual QTextCharFormat format(int pos) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"format", &handled, 1, (uint64_t)pos, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QTextCharFormat*)(irv);
      // RecordRecordQTextCharFormat
    } else {
    return QSyntaxHighlighter::format(pos);
  }
  }

// int previousBlockState()
  virtual int previousBlockState() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"previousBlockState", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QSyntaxHighlighter::previousBlockState();
  }
  }

// int currentBlockState()
  virtual int currentBlockState() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"currentBlockState", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QSyntaxHighlighter::currentBlockState();
  }
  }

// void setCurrentBlockState(int)
  virtual void setCurrentBlockState(int newState) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setCurrentBlockState", &handled, 1, (uint64_t)newState, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSyntaxHighlighter::setCurrentBlockState(newState);
  }
  }

// void setCurrentBlockUserData(class QTextBlockUserData *)
  virtual void setCurrentBlockUserData(QTextBlockUserData * data) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setCurrentBlockUserData", &handled, 1, (uint64_t)data, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSyntaxHighlighter::setCurrentBlockUserData(data);
  }
  }

// QTextBlockUserData * currentBlockUserData()
  virtual QTextBlockUserData * currentBlockUserData() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"currentBlockUserData", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QTextBlockUserData *)(irv);
      // PointerPointerQTextBlockUserData *
    } else {
    return QSyntaxHighlighter::currentBlockUserData();
  }
  }

// QTextBlock currentBlock()
  virtual QTextBlock currentBlock() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"currentBlock", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QTextBlock*)(irv);
      // RecordRecordQTextBlock
    } else {
    return QSyntaxHighlighter::currentBlock();
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:62
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK18QSyntaxHighlighter10metaObjectEv(void *this_) {
  return (void*)((QSyntaxHighlighter*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:65
// [-2] void QSyntaxHighlighter(class QObject *)
extern "C"
void* C_ZN18QSyntaxHighlighterC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQSyntaxHighlighter*)(0);
  return 0; // new MyQSyntaxHighlighter(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:66
// [-2] void QSyntaxHighlighter(class QTextDocument *)
extern "C"
void* C_ZN18QSyntaxHighlighterC2EP13QTextDocument(QTextDocument * parent) {
  auto _nilp = (MyQSyntaxHighlighter*)(0);
  return 0; // new MyQSyntaxHighlighter(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:67
// [-2] void ~QSyntaxHighlighter()
extern "C"
void C_ZN18QSyntaxHighlighterD2Ev(void *this_) {
  delete (QSyntaxHighlighter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:69
// [-2] void setDocument(class QTextDocument *)
extern "C"
void C_ZN18QSyntaxHighlighter11setDocumentEP13QTextDocument(void *this_, QTextDocument * doc) {
  ((QSyntaxHighlighter*)this_)->setDocument(doc);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:70
// [8] QTextDocument * document()
extern "C"
void* C_ZNK18QSyntaxHighlighter8documentEv(void *this_) {
  return (void*)((QSyntaxHighlighter*)this_)->document();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:73
// [-2] void rehighlight()
extern "C"
void C_ZN18QSyntaxHighlighter11rehighlightEv(void *this_) {
  ((QSyntaxHighlighter*)this_)->rehighlight();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:74
// [-2] void rehighlightBlock(const class QTextBlock &)
extern "C"
void C_ZN18QSyntaxHighlighter16rehighlightBlockERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QSyntaxHighlighter*)this_)->rehighlightBlock(*block);
}
//  main block end
