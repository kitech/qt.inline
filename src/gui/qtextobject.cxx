// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
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

int QTextBlockGroup_Class_Size()
{
  return sizeof(QTextBlockGroup);
}

int QTextFrame_Class_Size()
{
  return sizeof(QTextFrame);
}

// QTextFrame(class QTextDocument *)
QTextFrame* dector_ZN10QTextFrameC1EP13QTextDocument(QTextDocument * doc)
{
  // static_assert(sizeof(QTextFrame) == 32, "tyszerr");
  QTextFrame* rthis = new QTextFrame(doc);
  return rthis;
}

// ~QTextFrame()
void dedtor_ZN10QTextFrameD0Ev(QTextFrame* that)
{
  QTextFrame* rthis = (QTextFrame*)that;
  delete rthis;
}

  // proto:  void QTextFrame::setFrameFormat(const QTextFrameFormat & format);
void _ZN10QTextFrame14setFrameFormatERK16QTextFrameFormat(void *that, const QTextFrameFormat & format)
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
// <= body block end

