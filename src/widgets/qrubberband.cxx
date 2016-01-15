// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qrubberband.h
// dst-file: /src/widgets/qrubberband.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qrubberband.h>

extern "C" {

int QRubberBand_Class_Size()
{
  return sizeof(QRubberBand);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qrubberband_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 66, column 17>
//   // proto:  void QRubberBand::resize(const QSize & s);
if (false) {
  auto f = [](const QSize & arg1) {
    ((QRubberBand*)0)->resize(arg1);
  };
}
// _ZN11QRubberBand6resizeERK5QSize resize(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 60, column 17>
//   // proto:  void QRubberBand::setGeometry(int x, int y, int w, int h);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4) {
    ((QRubberBand*)0)->setGeometry(arg1, arg2, arg3, arg4);
  };
}
// _ZN11QRubberBand11setGeometryEiiii setGeometry(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 62, column 17>
//   // proto:  void QRubberBand::move(const QPoint & p);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QRubberBand*)0)->move(arg1);
  };
}
// _ZN11QRubberBand4moveERK6QPoint move(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 61, column 17>
//   // proto:  void QRubberBand::move(int x, int y);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QRubberBand*)0)->move(arg1, arg2);
  };
}
// _ZN11QRubberBand4moveEii move(int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 64, column 17>
//   // proto:  void QRubberBand::resize(int w, int h);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QRubberBand*)0)->resize(arg1, arg2);
  };
}
// _ZN11QRubberBand6resizeEii resize(int, int)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QRubberBand_SlotProxy here
class QRubberBand_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QRubberBand_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qrubberband.moc"

extern "C" {
  QRubberBand_SlotProxy* QRubberBand_SlotProxy_new()
  {
    return new QRubberBand_SlotProxy();
  }
};

// <= body block end

