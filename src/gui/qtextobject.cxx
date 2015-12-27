// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtGui/qtextobject.h
// dst-file: /src/gui/qtextobject.cxx
//

// header block begin =>
#include <qtextobject.h>

extern "C" {

int QTextObject_Class_Size()
{
  return sizeof(QTextObject);
}

int QTextBlockUserData_Class_Size()
{
  return sizeof(QTextBlockUserData);
}

// ~QTextBlockUserData()
void dedtor_ZN18QTextBlockUserDataD0Ev(QTextBlockUserData* that)
{
  QTextBlockUserData* rthis = (QTextBlockUserData*)that;
  delete rthis;
}

int QTextFragment_Class_Size()
{
  return sizeof(QTextFragment);
}

// QTextFragment(const class QTextFragment &)
QTextFragment* dector_ZN13QTextFragmentC1ERKS_(const QTextFragment & o)
{
  // static_assert(sizeof(QTextFragment) == 32, "tyszerr");
  QTextFragment* rthis = new QTextFragment(o);
  return rthis;
}

// QTextFragment()
QTextFragment* dector_ZN13QTextFragmentC1Ev()
{
  // static_assert(sizeof(QTextFragment) == 32, "tyszerr");
  QTextFragment* rthis = new QTextFragment();
  return rthis;
}

// QTextFragment(const class QTextDocumentPrivate *, int, int)
QTextFragment* dector_ZN13QTextFragmentC1EPK20QTextDocumentPrivateii(const QTextDocumentPrivate * priv, int f, int fe)
{
  // static_assert(sizeof(QTextFragment) == 32, "tyszerr");
  QTextFragment* rthis = new QTextFragment(priv, f, fe);
  return rthis;
}

  // proto:  void QTextFragment::QTextFragment(const QTextFragment & o);
void demth_ZN13QTextFragmentC1ERKS_(void *that, const QTextFragment & o)
{
  QTextFragment *cthat = (QTextFragment *)that;
  auto _o = new(that) QTextFragment(o);
}

  // proto:  void QTextFragment::QTextFragment();
void demth_ZN13QTextFragmentC1Ev(void *that)
{
  QTextFragment *cthat = (QTextFragment *)that;
  auto _o = new(that) QTextFragment();
}

  // proto:  bool QTextFragment::isValid();
bool demth_ZNK13QTextFragment7isValidEv(void *that)
{
  QTextFragment *cthat = (QTextFragment *)that;
  return cthat->isValid();
}

  // proto:  void QTextFragment::QTextFragment(const QTextDocumentPrivate * priv, int f, int fe);
void demth_ZN13QTextFragmentC1EPK20QTextDocumentPrivateii(void *that, const QTextDocumentPrivate * priv, int f, int fe)
{
  QTextFragment *cthat = (QTextFragment *)that;
  auto _o = new(that) QTextFragment(priv, f, fe);
}

int QTextFrameLayoutData_Class_Size()
{
  return sizeof(QTextFrameLayoutData);
}

// ~QTextFrameLayoutData()
void dedtor_ZN20QTextFrameLayoutDataD0Ev(QTextFrameLayoutData* that)
{
  QTextFrameLayoutData* rthis = (QTextFrameLayoutData*)that;
  delete rthis;
}

int QTextBlock_Class_Size()
{
  return sizeof(QTextBlock);
}

// QTextBlock(const class QTextBlock &)
QTextBlock* dector_ZN10QTextBlockC1ERKS_(const QTextBlock & o)
{
  // static_assert(sizeof(QTextBlock) == 32, "tyszerr");
  QTextBlock* rthis = new QTextBlock(o);
  return rthis;
}

// QTextBlock(class QTextDocumentPrivate *, int)
QTextBlock* dector_ZN10QTextBlockC1EP20QTextDocumentPrivatei(QTextDocumentPrivate * priv, int b)
{
  // static_assert(sizeof(QTextBlock) == 32, "tyszerr");
  QTextBlock* rthis = new QTextBlock(priv, b);
  return rthis;
}

// QTextBlock()
QTextBlock* dector_ZN10QTextBlockC1Ev()
{
  // static_assert(sizeof(QTextBlock) == 32, "tyszerr");
  QTextBlock* rthis = new QTextBlock();
  return rthis;
}

  // proto:  void QTextBlock::QTextBlock(const QTextBlock & o);
void demth_ZN10QTextBlockC1ERKS_(void *that, const QTextBlock & o)
{
  QTextBlock *cthat = (QTextBlock *)that;
  auto _o = new(that) QTextBlock(o);
}

  // proto:  QTextDocumentPrivate * QTextBlock::docHandle();
QTextDocumentPrivate * demth_ZNK10QTextBlock9docHandleEv(void *that)
{
  QTextBlock *cthat = (QTextBlock *)that;
  return cthat->docHandle();
}

  // proto:  void QTextBlock::QTextBlock(QTextDocumentPrivate * priv, int b);
void demth_ZN10QTextBlockC1EP20QTextDocumentPrivatei(void *that, QTextDocumentPrivate * priv, int b)
{
  QTextBlock *cthat = (QTextBlock *)that;
  auto _o = new(that) QTextBlock(priv, b);
}

  // proto:  int QTextBlock::fragmentIndex();
int demth_ZNK10QTextBlock13fragmentIndexEv(void *that)
{
  QTextBlock *cthat = (QTextBlock *)that;
  return cthat->fragmentIndex();
}

  // proto:  void QTextBlock::QTextBlock();
void demth_ZN10QTextBlockC1Ev(void *that)
{
  QTextBlock *cthat = (QTextBlock *)that;
  auto _o = new(that) QTextBlock();
}

int QTextBlockGroup_Class_Size()
{
  return sizeof(QTextBlockGroup);
}

int QTextFrame_Class_Size()
{
  return sizeof(QTextFrame);
}

// ~QTextFrame()
void dedtor_ZN10QTextFrameD0Ev(QTextFrame* that)
{
  QTextFrame* rthis = (QTextFrame*)that;
  delete rthis;
}

// QTextFrame(class QTextDocument *)
QTextFrame* dector_ZN10QTextFrameC1EP13QTextDocument(QTextDocument * doc)
{
  // static_assert(sizeof(QTextFrame) == 32, "tyszerr");
  QTextFrame* rthis = new QTextFrame(doc);
  return rthis;
}

  // proto:  void QTextFrame::setFrameFormat(const QTextFrameFormat & format);
void demth_ZN10QTextFrame14setFrameFormatERK16QTextFrameFormat(void *that, const QTextFrameFormat & format)
{
  QTextFrame *cthat = (QTextFrame *)that;
   cthat->setFrameFormat(format);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QTextObject_SlotProxy here
class QTextObject_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QTextObject_SlotProxy():QObject(){}

};

extern "C" {
  QTextObject_SlotProxy* QTextObject_SlotProxy_new()
  {
    return new QTextObject_SlotProxy();
  }
};

// QTextBlockGroup_SlotProxy here
class QTextBlockGroup_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QTextBlockGroup_SlotProxy():QObject(){}

};

extern "C" {
  QTextBlockGroup_SlotProxy* QTextBlockGroup_SlotProxy_new()
  {
    return new QTextBlockGroup_SlotProxy();
  }
};

// QTextFrame_SlotProxy here
class QTextFrame_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QTextFrame_SlotProxy():QObject(){}

};
#include "src/gui/qtextobject.moc"

extern "C" {
  QTextFrame_SlotProxy* QTextFrame_SlotProxy_new()
  {
    return new QTextFrame_SlotProxy();
  }
};

// <= body block end

