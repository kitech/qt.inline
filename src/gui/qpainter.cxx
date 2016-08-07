// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtGui/qpainter.h
// dst-file: /src/gui/qpainter.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qpainter.h>


#include <qrect.h>
#include <qmatrix.h>
#include <qglobal.h>
#include <qtransform.h>
#include <qnamespace.h>
#include <qregion.h>
#include <qfont.h>
#include <qfontmetrics.h>
#include <qbrush.h>
#include <qpainterpath.h>
#include <qpoint.h>
#include <qfontinfo.h>
#include <qpen.h>
// <= header block end

// main block begin =>
void __keep_qpainter_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 442, column 17>
//   // proto:  void QPainter::fillRect(const QRect & r, Qt::GlobalColor c);
if (true) {
  auto f = [](QPainter flythis, const QRect & arg1, Qt::GlobalColor arg2) {
    ((QPainter*)0)->fillRect(arg1, arg2);
    flythis.fillRect(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8fillRectERK5QRectN2Qt11GlobalColorE fillRect(const class QRect &, Qt::GlobalColor)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 438, column 17>
//   // proto:  void QPainter::fillRect(int x, int y, int w, int h, const QColor & color);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4, const QColor & arg5) {
    ((QPainter*)0)->fillRect(arg1, arg2, arg3, arg4, arg5);
    flythis.fillRect(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8fillRectEiiiiRK6QColor fillRect(int, int, int, int, const class QColor &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 413, column 17>
//   // proto:  void QPainter::drawText(int x, int y, const QString & s);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, const QString & arg3) {
    ((QPainter*)0)->drawText(arg1, arg2, arg3);
    flythis.drawText(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8drawTextEiiRK7QString drawText(int, int, const class QString &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 393, column 17>
//   // proto:  void QPainter::drawImage(const QRectF & r, const QImage & image);
if (true) {
  auto f = [](QPainter flythis, const QRectF & arg1, const QImage & arg2) {
    ((QPainter*)0)->drawImage(arg1, arg2);
    flythis.drawImage(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawImageERK6QRectFRK6QImage drawImage(const class QRectF &, const class QImage &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 389, column 17>
//   // proto:  void QPainter::drawImage(const QPointF & p, const QImage & image, const QRectF & sr, Qt::ImageConversionFlags flags);
if (true) {
  auto f = [](QPainter flythis, const QPointF & arg1, const QImage & arg2, const QRectF & arg3, Qt::ImageConversionFlags arg4) {
    ((QPainter*)0)->drawImage(arg1, arg2, arg3, arg4);
    flythis.drawImage(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawImageERK7QPointFRK6QImageRK6QRectF6QFlagsIN2Qt19ImageConversionFlagEE drawImage(const class QPointF &, const class QImage &, const class QRectF &, Qt::ImageConversionFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 445, column 17>
//   // proto:  void QPainter::fillRect(int x, int y, int w, int h, Qt::BrushStyle style);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4, Qt::BrushStyle arg5) {
    ((QPainter*)0)->fillRect(arg1, arg2, arg3, arg4, arg5);
    flythis.fillRect(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8fillRectEiiiiN2Qt10BrushStyleE fillRect(int, int, int, int, Qt::BrushStyle)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 312, column 17>
//   // proto:  void QPainter::drawRects(const QVector<QRect> & rectangles);
if (true) {
  auto f = [](QPainter flythis, const QVector<QRect> & arg1) {
    ((QPainter*)0)->drawRects(arg1);
    flythis.drawRects(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawRectsERK7QVectorI5QRectE drawRects(const QVector<class QRect> &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 346, column 17>
//   // proto:  void QPainter::drawChord(const QRect & , int a, int alen);
if (true) {
  auto f = [](QPainter flythis, const QRect & arg1, int arg2, int arg3) {
    ((QPainter*)0)->drawChord(arg1, arg2, arg3);
    flythis.drawChord(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawChordERK5QRectii drawChord(const class QRect &, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 262, column 17>
//   // proto:  void QPainter::translate(const QPoint & offset);
if (true) {
  auto f = [](QPainter flythis, const QPoint & arg1) {
    ((QPainter*)0)->translate(arg1);
    flythis.translate(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9translateERK6QPoint translate(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 201, column 17>
//   // proto:  void QPainter::setBrushOrigin(int x, int y);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2) {
    ((QPainter*)0)->setBrushOrigin(arg1, arg2);
    flythis.setBrushOrigin(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter14setBrushOriginEii setBrushOrigin(int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 319, column 17>
//   // proto:  void QPainter::drawEllipse(const QPoint & center, int rx, int ry);
if (true) {
  auto f = [](QPainter flythis, const QPoint & arg1, int arg2, int arg3) {
    ((QPainter*)0)->drawEllipse(arg1, arg2, arg3);
    flythis.drawEllipse(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN8QPainter11drawEllipseERK6QPointii drawEllipse(const class QPoint &, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 338, column 17>
//   // proto:  void QPainter::drawArc(int x, int y, int w, int h, int a, int alen);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
    ((QPainter*)0)->drawArc(arg1, arg2, arg3, arg4, arg5, arg6);
    flythis.drawArc(arg1, arg2, arg3, arg4, arg5, arg6);
  };
  if (f == nullptr){}
}
// _ZN8QPainter7drawArcEiiiiii drawArc(int, int, int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 322, column 17>
//   // proto:  void QPainter::drawPolyline(const QPolygonF & polyline);
if (true) {
  auto f = [](QPainter flythis, const QPolygonF & arg1) {
    ((QPainter*)0)->drawPolyline(arg1);
    flythis.drawPolyline(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter12drawPolylineERK9QPolygonF drawPolyline(const class QPolygonF &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 409, column 17>
//   // proto:  void QPainter::drawStaticText(int left, int top, const QStaticText & staticText);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, const QStaticText & arg3) {
    ((QPainter*)0)->drawStaticText(arg1, arg2, arg3);
    flythis.drawStaticText(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN8QPainter14drawStaticTextEiiRK11QStaticText drawStaticText(int, int, const class QStaticText &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 372, column 17>
//   // proto:  void QPainter::drawPixmap(int x, int y, const QPixmap & pm, int sx, int sy, int sw, int sh);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, const QPixmap & arg3, int arg4, int arg5, int arg6, int arg7) {
    ((QPainter*)0)->drawPixmap(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    flythis.drawPixmap(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
  };
  if (f == nullptr){}
}
// _ZN8QPainter10drawPixmapEiiRK7QPixmapiiii drawPixmap(int, int, const class QPixmap &, int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 378, column 17>
//   // proto:  void QPainter::drawPixmap(int x, int y, const QPixmap & pm);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, const QPixmap & arg3) {
    ((QPainter*)0)->drawPixmap(arg1, arg2, arg3);
    flythis.drawPixmap(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN8QPainter10drawPixmapEiiRK7QPixmap drawPixmap(int, int, const class QPixmap &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 324, column 17>
//   // proto:  void QPainter::drawPolyline(const QPolygon & polygon);
if (true) {
  auto f = [](QPainter flythis, const QPolygon & arg1) {
    ((QPainter*)0)->drawPolyline(arg1);
    flythis.drawPolyline(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter12drawPolylineERK8QPolygon drawPolyline(const class QPolygon &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 361, column 17>
//   // proto:  void QPainter::drawTiledPixmap(const QRect & , const QPixmap & , const QPoint & );
if (true) {
  auto f = [](QPainter flythis, const QRect & arg1, const QPixmap & arg2, const QPoint & arg3) {
    ((QPainter*)0)->drawTiledPixmap(arg1, arg2, arg3);
    flythis.drawTiledPixmap(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN8QPainter15drawTiledPixmapERK5QRectRK7QPixmapRK6QPoint drawTiledPixmap(const class QRect &, const class QPixmap &, const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 345, column 17>
//   // proto:  void QPainter::drawChord(int x, int y, int w, int h, int a, int alen);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
    ((QPainter*)0)->drawChord(arg1, arg2, arg3, arg4, arg5, arg6);
    flythis.drawChord(arg1, arg2, arg3, arg4, arg5, arg6);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawChordEiiiiii drawChord(int, int, int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 380, column 17>
//   // proto:  void QPainter::drawPixmap(int x, int y, int w, int h, const QPixmap & pm);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4, const QPixmap & arg5) {
    ((QPainter*)0)->drawPixmap(arg1, arg2, arg3, arg4, arg5);
    flythis.drawPixmap(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZN8QPainter10drawPixmapEiiiiRK7QPixmap drawPixmap(int, int, int, int, const class QPixmap &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 425, column 18>
//   // proto:  QRect QPainter::boundingRect(int x, int y, int w, int h, int flags, const QString & text);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4, int arg5, const QString & arg6) {
    ((QPainter*)0)->boundingRect(arg1, arg2, arg3, arg4, arg5, arg6);
    flythis.boundingRect(arg1, arg2, arg3, arg4, arg5, arg6);
  };
  if (f == nullptr){}
}
// _ZN8QPainter12boundingRectEiiiiiRK7QString boundingRect(int, int, int, int, int, const class QString &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 341, column 17>
//   // proto:  void QPainter::drawPie(int x, int y, int w, int h, int a, int alen);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
    ((QPainter*)0)->drawPie(arg1, arg2, arg3, arg4, arg5, arg6);
    flythis.drawPie(arg1, arg2, arg3, arg4, arg5, arg6);
  };
  if (f == nullptr){}
}
// _ZN8QPainter7drawPieEiiiiii drawPie(int, int, int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 375, column 17>
//   // proto:  void QPainter::drawPixmap(const QPoint & p, const QPixmap & pm, const QRect & sr);
if (true) {
  auto f = [](QPainter flythis, const QPoint & arg1, const QPixmap & arg2, const QRect & arg3) {
    ((QPainter*)0)->drawPixmap(arg1, arg2, arg3);
    flythis.drawPixmap(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN8QPainter10drawPixmapERK6QPointRK7QPixmapRK5QRect drawPixmap(const class QPoint &, const class QPixmap &, const class QRect &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 387, column 17>
//   // proto:  void QPainter::drawImage(const QRect & targetRect, const QImage & image, const QRect & sourceRect, Qt::ImageConversionFlags flags);
if (true) {
  auto f = [](QPainter flythis, const QRect & arg1, const QImage & arg2, const QRect & arg3, Qt::ImageConversionFlags arg4) {
    ((QPainter*)0)->drawImage(arg1, arg2, arg3, arg4);
    flythis.drawImage(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawImageERK5QRectRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE drawImage(const class QRect &, const class QImage &, const class QRect &, Qt::ImageConversionFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 288, column 17>
//   // proto:  void QPainter::drawPoints(const QPolygon & points);
if (true) {
  auto f = [](QPainter flythis, const QPolygon & arg1) {
    ((QPainter*)0)->drawPoints(arg1);
    flythis.drawPoints(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter10drawPointsERK8QPolygon drawPoints(const class QPolygon &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 310, column 17>
//   // proto:  void QPainter::drawRects(const QVector<QRectF> & rectangles);
if (true) {
  auto f = [](QPainter flythis, const QVector<QRectF> & arg1) {
    ((QPainter*)0)->drawRects(arg1);
    flythis.drawRects(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawRectsERK7QVectorI6QRectFE drawRects(const QVector<class QRectF> &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 397, column 17>
//   // proto:  void QPainter::drawImage(int x, int y, const QImage & image, int sx, int sy, int sw, int sh, Qt::ImageConversionFlags flags);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, const QImage & arg3, int arg4, int arg5, int arg6, int arg7, Qt::ImageConversionFlags arg8) {
    ((QPainter*)0)->drawImage(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    flythis.drawImage(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawImageEiiRK6QImageiiii6QFlagsIN2Qt19ImageConversionFlagEE drawImage(int, int, const class QImage &, int, int, int, int, Qt::ImageConversionFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 365, column 17>
//   // proto:  void QPainter::drawPicture(const QPoint & p, const QPicture & picture);
if (true) {
  auto f = [](QPainter flythis, const QPoint & arg1, const QPicture & arg2) {
    ((QPainter*)0)->drawPicture(arg1, arg2);
    flythis.drawPicture(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter11drawPictureERK6QPointRK8QPicture drawPicture(const class QPoint &, const class QPicture &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 447, column 17>
//   // proto:  void QPainter::fillRect(const QRectF & r, Qt::BrushStyle style);
if (true) {
  auto f = [](QPainter flythis, const QRectF & arg1, Qt::BrushStyle arg2) {
    ((QPainter*)0)->fillRect(arg1, arg2);
    flythis.fillRect(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8fillRectERK6QRectFN2Qt10BrushStyleE fillRect(const class QRectF &, Qt::BrushStyle)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 443, column 17>
//   // proto:  void QPainter::fillRect(const QRectF & r, Qt::GlobalColor c);
if (true) {
  auto f = [](QPainter flythis, const QRectF & arg1, Qt::GlobalColor arg2) {
    ((QPainter*)0)->fillRect(arg1, arg2);
    flythis.fillRect(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8fillRectERK6QRectFN2Qt11GlobalColorE fillRect(const class QRectF &, Qt::GlobalColor)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 301, column 17>
//   // proto:  void QPainter::drawLines(const QVector<QLine> & lines);
if (true) {
  auto f = [](QPainter flythis, const QVector<QLine> & arg1) {
    ((QPainter*)0)->drawLines(arg1);
    flythis.drawLines(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawLinesERK7QVectorI5QLineE drawLines(const QVector<class QLine> &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 306, column 17>
//   // proto:  void QPainter::drawRect(int x1, int y1, int w, int h);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4) {
    ((QPainter*)0)->drawRect(arg1, arg2, arg3, arg4);
    flythis.drawRect(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8drawRectEiiii drawRect(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 305, column 17>
//   // proto:  void QPainter::drawRect(const QRectF & rect);
if (true) {
  auto f = [](QPainter flythis, const QRectF & arg1) {
    ((QPainter*)0)->drawRect(arg1);
    flythis.drawRect(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8drawRectERK6QRectF drawRect(const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 456, column 17>
//   // proto:  bool QPainter::testRenderHint(QPainter::RenderHint hint);
if (true) {
  auto f = [](QPainter flythis, QPainter::RenderHint arg1) {
    ((QPainter*)0)->testRenderHint(arg1);
    flythis.testRenderHint(arg1);
  };
  if (f == nullptr){}
}
// _ZNK8QPainter14testRenderHintENS_10RenderHintE testRenderHint(enum QPainter::RenderHint)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 290, column 17>
//   // proto:  void QPainter::drawLine(const QLineF & line);
if (true) {
  auto f = [](QPainter flythis, const QLineF & arg1) {
    ((QPainter*)0)->drawLine(arg1);
    flythis.drawLine(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8drawLineERK6QLineF drawLine(const class QLineF &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 294, column 17>
//   // proto:  void QPainter::drawLine(const QPointF & p1, const QPointF & p2);
if (true) {
  auto f = [](QPainter flythis, const QPointF & arg1, const QPointF & arg2) {
    ((QPainter*)0)->drawLine(arg1, arg2);
    flythis.drawLine(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8drawLineERK7QPointFS2_ drawLine(const class QPointF &, const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 379, column 17>
//   // proto:  void QPainter::drawPixmap(const QRect & r, const QPixmap & pm);
if (true) {
  auto f = [](QPainter flythis, const QRect & arg1, const QPixmap & arg2) {
    ((QPainter*)0)->drawPixmap(arg1, arg2);
    flythis.drawPixmap(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter10drawPixmapERK5QRectRK7QPixmap drawPixmap(const class QRect &, const class QPixmap &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 360, column 17>
//   // proto:  void QPainter::drawTiledPixmap(int x, int y, int w, int h, const QPixmap & , int sx, int sy);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4, const QPixmap & arg5, int arg6, int arg7) {
    ((QPainter*)0)->drawTiledPixmap(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    flythis.drawTiledPixmap(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
  };
  if (f == nullptr){}
}
// _ZN8QPainter15drawTiledPixmapEiiiiRK7QPixmapii drawTiledPixmap(int, int, int, int, const class QPixmap &, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 352, column 17>
//   // proto:  void QPainter::drawRoundedRect(const QRect & rect, qreal xRadius, qreal yRadius, Qt::SizeMode mode);
if (true) {
  auto f = [](QPainter flythis, const QRect & arg1, qreal arg2, qreal arg3, Qt::SizeMode arg4) {
    ((QPainter*)0)->drawRoundedRect(arg1, arg2, arg3, arg4);
    flythis.drawRoundedRect(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN8QPainter15drawRoundedRectERK5QRectddN2Qt8SizeModeE drawRoundedRect(const class QRect &, qreal, qreal, Qt::SizeMode)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 441, column 17>
//   // proto:  void QPainter::fillRect(int x, int y, int w, int h, Qt::GlobalColor c);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4, Qt::GlobalColor arg5) {
    ((QPainter*)0)->fillRect(arg1, arg2, arg3, arg4, arg5);
    flythis.fillRect(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8fillRectEiiiiN2Qt11GlobalColorE fillRect(int, int, int, int, Qt::GlobalColor)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 430, column 17>
//   // proto:  void QPainter::drawTextItem(int x, int y, const QTextItem & ti);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, const QTextItem & arg3) {
    ((QPainter*)0)->drawTextItem(arg1, arg2, arg3);
    flythis.drawTextItem(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN8QPainter12drawTextItemEiiRK9QTextItem drawTextItem(int, int, const class QTextItem &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 391, column 17>
//   // proto:  void QPainter::drawImage(const QPoint & p, const QImage & image, const QRect & sr, Qt::ImageConversionFlags flags);
if (true) {
  auto f = [](QPainter flythis, const QPoint & arg1, const QImage & arg2, const QRect & arg3, Qt::ImageConversionFlags arg4) {
    ((QPainter*)0)->drawImage(arg1, arg2, arg3, arg4);
    flythis.drawImage(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawImageERK6QPointRK6QImageRK5QRect6QFlagsIN2Qt19ImageConversionFlagEE drawImage(const class QPoint &, const class QImage &, const class QRect &, Qt::ImageConversionFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 370, column 17>
//   // proto:  void QPainter::drawPixmap(int x, int y, int w, int h, const QPixmap & pm, int sx, int sy, int sw, int sh);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4, const QPixmap & arg5, int arg6, int arg7, int arg8, int arg9) {
    ((QPainter*)0)->drawPixmap(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    flythis.drawPixmap(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
  };
  if (f == nullptr){}
}
// _ZN8QPainter10drawPixmapEiiiiRK7QPixmapiiii drawPixmap(int, int, int, int, const class QPixmap &, int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 396, column 17>
//   // proto:  void QPainter::drawImage(const QPoint & p, const QImage & image);
if (true) {
  auto f = [](QPainter flythis, const QPoint & arg1, const QImage & arg2) {
    ((QPainter*)0)->drawImage(arg1, arg2);
    flythis.drawImage(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawImageERK6QPointRK6QImage drawImage(const class QPoint &, const class QImage &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 342, column 17>
//   // proto:  void QPainter::drawPie(const QRect & , int a, int alen);
if (true) {
  auto f = [](QPainter flythis, const QRect & arg1, int arg2, int arg3) {
    ((QPainter*)0)->drawPie(arg1, arg2, arg3);
    flythis.drawPie(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN8QPainter7drawPieERK5QRectii drawPie(const class QRect &, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 431, column 17>
//   // proto:  void QPainter::drawTextItem(const QPoint & p, const QTextItem & ti);
if (true) {
  auto f = [](QPainter flythis, const QPoint & arg1, const QTextItem & arg2) {
    ((QPainter*)0)->drawTextItem(arg1, arg2);
    flythis.drawTextItem(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter12drawTextItemERK6QPointRK9QTextItem drawTextItem(const class QPoint &, const class QTextItem &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 364, column 17>
//   // proto:  void QPainter::drawPicture(int x, int y, const QPicture & picture);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, const QPicture & arg3) {
    ((QPainter*)0)->drawPicture(arg1, arg2, arg3);
    flythis.drawPicture(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN8QPainter11drawPictureEiiRK8QPicture drawPicture(int, int, const class QPicture &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 263, column 17>
//   // proto:  void QPainter::translate(qreal dx, qreal dy);
if (true) {
  auto f = [](QPainter flythis, qreal arg1, qreal arg2) {
    ((QPainter*)0)->translate(arg1, arg2);
    flythis.translate(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9translateEdd translate(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 271, column 17>
//   // proto:  void QPainter::setViewport(int x, int y, int w, int h);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4) {
    ((QPainter*)0)->setViewport(arg1, arg2, arg3, arg4);
    flythis.setViewport(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN8QPainter11setViewportEiiii setViewport(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 357, column 17>
//   // proto:  void QPainter::drawRoundRect(const QRect & r, int xround, int yround);
if (true) {
  auto f = [](QPainter flythis, const QRect & arg1, int arg2, int arg3) {
    ((QPainter*)0)->drawRoundRect(arg1, arg2, arg3);
    flythis.drawRoundRect(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN8QPainter13drawRoundRectERK5QRectii drawRoundRect(const class QRect &, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 286, column 17>
//   // proto:  void QPainter::drawPoints(const QPolygonF & points);
if (true) {
  auto f = [](QPainter flythis, const QPolygonF & arg1) {
    ((QPainter*)0)->drawPoints(arg1);
    flythis.drawPoints(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter10drawPointsERK9QPolygonF drawPoints(const class QPolygonF &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 408, column 17>
//   // proto:  void QPainter::drawStaticText(const QPoint & topLeftPosition, const QStaticText & staticText);
if (true) {
  auto f = [](QPainter flythis, const QPoint & arg1, const QStaticText & arg2) {
    ((QPainter*)0)->drawStaticText(arg1, arg2);
    flythis.drawStaticText(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter14drawStaticTextERK6QPointRK11QStaticText drawStaticText(const class QPoint &, const class QStaticText &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 434, column 17>
//   // proto:  void QPainter::fillRect(int x, int y, int w, int h, const QBrush & );
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4, const QBrush & arg5) {
    ((QPainter*)0)->fillRect(arg1, arg2, arg3, arg4, arg5);
    flythis.fillRect(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8fillRectEiiiiRK6QBrush fillRect(int, int, int, int, const class QBrush &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 282, column 17>
//   // proto:  void QPainter::drawPoint(const QPoint & p);
if (true) {
  auto f = [](QPainter flythis, const QPoint & arg1) {
    ((QPainter*)0)->drawPoint(arg1);
    flythis.drawPoint(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawPointERK6QPoint drawPoint(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 450, column 17>
//   // proto:  void QPainter::eraseRect(int x, int y, int w, int h);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4) {
    ((QPainter*)0)->eraseRect(arg1, arg2, arg3, arg4);
    flythis.eraseRect(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9eraseRectEiiii eraseRect(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 291, column 17>
//   // proto:  void QPainter::drawLine(const QLine & line);
if (true) {
  auto f = [](QPainter flythis, const QLine & arg1) {
    ((QPainter*)0)->drawLine(arg1);
    flythis.drawLine(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8drawLineERK5QLine drawLine(const class QLine &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 297, column 17>
//   // proto:  void QPainter::drawLines(const QVector<QLineF> & lines);
if (true) {
  auto f = [](QPainter flythis, const QVector<QLineF> & arg1) {
    ((QPainter*)0)->drawLines(arg1);
    flythis.drawLines(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawLinesERK7QVectorI6QLineFE drawLines(const QVector<class QLineF> &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 374, column 17>
//   // proto:  void QPainter::drawPixmap(const QPointF & p, const QPixmap & pm, const QRectF & sr);
if (true) {
  auto f = [](QPainter flythis, const QPointF & arg1, const QPixmap & arg2, const QRectF & arg3) {
    ((QPainter*)0)->drawPixmap(arg1, arg2, arg3);
    flythis.drawPixmap(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN8QPainter10drawPixmapERK7QPointFRK7QPixmapRK6QRectF drawPixmap(const class QPointF &, const class QPixmap &, const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 318, column 17>
//   // proto:  void QPainter::drawEllipse(const QPointF & center, qreal rx, qreal ry);
if (true) {
  auto f = [](QPainter flythis, const QPointF & arg1, qreal arg2, qreal arg3) {
    ((QPainter*)0)->drawEllipse(arg1, arg2, arg3);
    flythis.drawEllipse(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN8QPainter11drawEllipseERK7QPointFdd drawEllipse(const class QPointF &, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 202, column 17>
//   // proto:  void QPainter::setBrushOrigin(const QPoint & );
if (true) {
  auto f = [](QPainter flythis, const QPoint & arg1) {
    ((QPainter*)0)->setBrushOrigin(arg1);
    flythis.setBrushOrigin(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter14setBrushOriginERK6QPoint setBrushOrigin(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 377, column 17>
//   // proto:  void QPainter::drawPixmap(const QPoint & p, const QPixmap & pm);
if (true) {
  auto f = [](QPainter flythis, const QPoint & arg1, const QPixmap & arg2) {
    ((QPainter*)0)->drawPixmap(arg1, arg2);
    flythis.drawPixmap(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter10drawPixmapERK6QPointRK7QPixmap drawPixmap(const class QPoint &, const class QPixmap &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 292, column 17>
//   // proto:  void QPainter::drawLine(int x1, int y1, int x2, int y2);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4) {
    ((QPainter*)0)->drawLine(arg1, arg2, arg3, arg4);
    flythis.drawLine(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8drawLineEiiii drawLine(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 283, column 17>
//   // proto:  void QPainter::drawPoint(int x, int y);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2) {
    ((QPainter*)0)->drawPoint(arg1, arg2);
    flythis.drawPoint(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawPointEii drawPoint(int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 369, column 17>
//   // proto:  void QPainter::drawPixmap(const QRect & targetRect, const QPixmap & pixmap, const QRect & sourceRect);
if (true) {
  auto f = [](QPainter flythis, const QRect & arg1, const QPixmap & arg2, const QRect & arg3) {
    ((QPainter*)0)->drawPixmap(arg1, arg2, arg3);
    flythis.drawPixmap(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN8QPainter10drawPixmapERK5QRectRK7QPixmapS2_ drawPixmap(const class QRect &, const class QPixmap &, const class QRect &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 303, column 17>
//   // proto:  void QPainter::drawLines(const QVector<QPoint> & pointPairs);
if (true) {
  auto f = [](QPainter flythis, const QVector<QPoint> & arg1) {
    ((QPainter*)0)->drawLines(arg1);
    flythis.drawLines(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawLinesERK7QVectorI6QPointE drawLines(const QVector<class QPoint> &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 329, column 17>
//   // proto:  void QPainter::drawPolygon(const QPolygon & polygon, Qt::FillRule fillRule);
if (true) {
  auto f = [](QPainter flythis, const QPolygon & arg1, Qt::FillRule arg2) {
    ((QPainter*)0)->drawPolygon(arg1, arg2);
    flythis.drawPolygon(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter11drawPolygonERK8QPolygonN2Qt8FillRuleE drawPolygon(const class QPolygon &, Qt::FillRule)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 299, column 17>
//   // proto:  void QPainter::drawLines(const QVector<QPointF> & pointPairs);
if (true) {
  auto f = [](QPainter flythis, const QVector<QPointF> & arg1) {
    ((QPainter*)0)->drawLines(arg1);
    flythis.drawLines(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawLinesERK7QVectorI7QPointFE drawLines(const QVector<class QPointF> &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 307, column 17>
//   // proto:  void QPainter::drawRect(const QRect & rect);
if (true) {
  auto f = [](QPainter flythis, const QRect & arg1) {
    ((QPainter*)0)->drawRect(arg1);
    flythis.drawRect(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8drawRectERK5QRect drawRect(const class QRect &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 217, column 17>
//   // proto:  void QPainter::setClipRect(int x, int y, int w, int h, Qt::ClipOperation op);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4, Qt::ClipOperation arg5) {
    ((QPainter*)0)->setClipRect(arg1, arg2, arg3, arg4, arg5);
    flythis.setClipRect(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZN8QPainter11setClipRectEiiiiN2Qt13ClipOperationE setClipRect(int, int, int, int, Qt::ClipOperation)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 350, column 17>
//   // proto:  void QPainter::drawRoundedRect(int x, int y, int w, int h, qreal xRadius, qreal yRadius, Qt::SizeMode mode);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4, qreal arg5, qreal arg6, Qt::SizeMode arg7) {
    ((QPainter*)0)->drawRoundedRect(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    flythis.drawRoundedRect(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
  };
  if (f == nullptr){}
}
// _ZN8QPainter15drawRoundedRectEiiiiddN2Qt8SizeModeE drawRoundedRect(int, int, int, int, qreal, qreal, Qt::SizeMode)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 332, column 17>
//   // proto:  void QPainter::drawConvexPolygon(const QPolygonF & polygon);
if (true) {
  auto f = [](QPainter flythis, const QPolygonF & arg1) {
    ((QPainter*)0)->drawConvexPolygon(arg1);
    flythis.drawConvexPolygon(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter17drawConvexPolygonERK9QPolygonF drawConvexPolygon(const class QPolygonF &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 316, column 17>
//   // proto:  void QPainter::drawEllipse(int x, int y, int w, int h);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4) {
    ((QPainter*)0)->drawEllipse(arg1, arg2, arg3, arg4);
    flythis.drawEllipse(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN8QPainter11drawEllipseEiiii drawEllipse(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 334, column 17>
//   // proto:  void QPainter::drawConvexPolygon(const QPolygon & polygon);
if (true) {
  auto f = [](QPainter flythis, const QPolygon & arg1) {
    ((QPainter*)0)->drawConvexPolygon(arg1);
    flythis.drawConvexPolygon(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter17drawConvexPolygonERK8QPolygon drawConvexPolygon(const class QPolygon &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 356, column 17>
//   // proto:  void QPainter::drawRoundRect(int x, int y, int w, int h, int , int );
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
    ((QPainter*)0)->drawRoundRect(arg1, arg2, arg3, arg4, arg5, arg6);
    flythis.drawRoundRect(arg1, arg2, arg3, arg4, arg5, arg6);
  };
  if (f == nullptr){}
}
// _ZN8QPainter13drawRoundRectEiiiiii drawRoundRect(int, int, int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 337, column 17>
//   // proto:  void QPainter::drawArc(const QRect & , int a, int alen);
if (true) {
  auto f = [](QPainter flythis, const QRect & arg1, int arg2, int arg3) {
    ((QPainter*)0)->drawArc(arg1, arg2, arg3);
    flythis.drawArc(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN8QPainter7drawArcERK5QRectii drawArc(const class QRect &, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 419, column 17>
//   // proto:  void QPainter::drawText(int x, int y, int w, int h, int flags, const QString & text, QRect * br);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4, int arg5, const QString & arg6, QRect * arg7) {
    ((QPainter*)0)->drawText(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    flythis.drawText(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8drawTextEiiiiiRK7QStringP5QRect drawText(int, int, int, int, int, const class QString &, class QRect *)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 451, column 17>
//   // proto:  void QPainter::eraseRect(const QRect & );
if (true) {
  auto f = [](QPainter flythis, const QRect & arg1) {
    ((QPainter*)0)->eraseRect(arg1);
    flythis.eraseRect(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9eraseRectERK5QRect eraseRect(const class QRect &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 394, column 17>
//   // proto:  void QPainter::drawImage(const QRect & r, const QImage & image);
if (true) {
  auto f = [](QPainter flythis, const QRect & arg1, const QImage & arg2) {
    ((QPainter*)0)->drawImage(arg1, arg2);
    flythis.drawImage(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawImageERK5QRectRK6QImage drawImage(const class QRect &, const class QImage &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 446, column 17>
//   // proto:  void QPainter::fillRect(const QRect & r, Qt::BrushStyle style);
if (true) {
  auto f = [](QPainter flythis, const QRect & arg1, Qt::BrushStyle arg2) {
    ((QPainter*)0)->fillRect(arg1, arg2);
    flythis.fillRect(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8fillRectERK5QRectN2Qt10BrushStyleE fillRect(const class QRect &, Qt::BrushStyle)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 281, column 17>
//   // proto:  void QPainter::drawPoint(const QPointF & pt);
if (true) {
  auto f = [](QPainter flythis, const QPointF & arg1) {
    ((QPainter*)0)->drawPoint(arg1);
    flythis.drawPoint(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9drawPointERK7QPointF drawPoint(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 327, column 17>
//   // proto:  void QPainter::drawPolygon(const QPolygonF & polygon, Qt::FillRule fillRule);
if (true) {
  auto f = [](QPainter flythis, const QPolygonF & arg1, Qt::FillRule arg2) {
    ((QPainter*)0)->drawPolygon(arg1, arg2);
    flythis.drawPolygon(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter11drawPolygonERK9QPolygonFN2Qt8FillRuleE drawPolygon(const class QPolygonF &, Qt::FillRule)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 293, column 17>
//   // proto:  void QPainter::drawLine(const QPoint & p1, const QPoint & p2);
if (true) {
  auto f = [](QPainter flythis, const QPoint & arg1, const QPoint & arg2) {
    ((QPainter*)0)->drawLine(arg1, arg2);
    flythis.drawLine(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8drawLineERK6QPointS2_ drawLine(const class QPoint &, const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 412, column 17>
//   // proto:  void QPainter::drawText(const QPoint & p, const QString & s);
if (true) {
  auto f = [](QPainter flythis, const QPoint & arg1, const QString & arg2) {
    ((QPainter*)0)->drawText(arg1, arg2);
    flythis.drawText(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QPainter8drawTextERK6QPointRK7QString drawText(const class QPoint &, const class QString &)
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 267, column 17>
//   // proto:  void QPainter::setWindow(int x, int y, int w, int h);
if (true) {
  auto f = [](QPainter flythis, int arg1, int arg2, int arg3, int arg4) {
    ((QPainter*)0)->setWindow(arg1, arg2, arg3, arg4);
    flythis.setWindow(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN8QPainter9setWindowEiiii setWindow(int, int, int, int)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QPainter_Class_Size()
{
  return sizeof(QPainter);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 427, column 12>
//   // proto:  QRectF QPainter::boundingRect(const QRectF & rect, const QString & text, const QTextOption & o);
// _ZN8QPainter12boundingRectERK6QRectFRK7QStringRK11QTextOption boundingRect(const class QRectF &, const class QString &, const class QTextOption &)
extern "C"
QRectF*
C_ZN8QPainter12boundingRectERK6QRectFRK7QStringRK11QTextOption(void *qthis,
const QRectF* arg1,
const QString* arg2,
const QTextOption* arg3) {
  auto ret =
  ((QPainter*)qthis)->boundingRect(*((const QRectF*)arg1),
*((const QString*)arg2),
*((const QTextOption*)arg3));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 442, column 17>
//   // proto:  void QPainter::fillRect(const QRect & r, Qt::GlobalColor c);
// _ZN8QPainter8fillRectERK5QRectN2Qt11GlobalColorE fillRect(const class QRect &, Qt::GlobalColor)
extern "C"
void
C_ZN8QPainter8fillRectERK5QRectN2Qt11GlobalColorE(void *qthis,
const QRect* arg1,
Qt::GlobalColor* arg2) {
  ((QPainter*)qthis)->fillRect(*((const QRect*)arg1),
*((Qt::GlobalColor*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 363, column 10>
//   // proto:  void QPainter::drawPicture(const QPointF & p, const QPicture & picture);
// _ZN8QPainter11drawPictureERK7QPointFRK8QPicture drawPicture(const class QPointF &, const class QPicture &)
extern "C"
void
C_ZN8QPainter11drawPictureERK7QPointFRK8QPicture(void *qthis,
const QPointF* arg1,
const QPicture* arg2) {
  ((QPainter*)qthis)->drawPicture(*((const QPointF*)arg1),
*((const QPicture*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 243, column 20>
//   // proto:  const QMatrix & QPainter::worldMatrix();
// _ZNK8QPainter11worldMatrixEv worldMatrix()
extern "C"
QMatrix*
C_ZNK8QPainter11worldMatrixEv(void *qthis) {
  auto& ret =
  ((QPainter*)qthis)->worldMatrix();
  return new QMatrix(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 415, column 10>
//   // proto:  void QPainter::drawText(const QPointF & p, const QString & str, int tf, int justificationPadding);
// _ZN8QPainter8drawTextERK7QPointFRK7QStringii drawText(const class QPointF &, const class QString &, int, int)
extern "C"
void
C_ZN8QPainter8drawTextERK7QPointFRK7QStringii(void *qthis,
const QPointF* arg1,
const QString* arg2,
int arg3,
int arg4) {
  ((QPainter*)qthis)->drawText(*((const QPointF*)arg1),
*((const QString*)arg2),
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 438, column 17>
//   // proto:  void QPainter::fillRect(int x, int y, int w, int h, const QColor & color);
// _ZN8QPainter8fillRectEiiiiRK6QColor fillRect(int, int, int, int, const class QColor &)
extern "C"
void
C_ZN8QPainter8fillRectEiiiiRK6QColor(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
const QColor* arg5) {
  ((QPainter*)qthis)->fillRect(arg1,
arg2,
arg3,
arg4,
*((const QColor*)arg5));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 233, column 20>
//   // proto:  const QMatrix & QPainter::matrix();
// _ZNK8QPainter6matrixEv matrix()
extern "C"
QMatrix*
C_ZNK8QPainter6matrixEv(void *qthis) {
  auto& ret =
  ((QPainter*)qthis)->matrix();
  return new QMatrix(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 208, column 11>
//   // proto:  qreal QPainter::opacity();
// _ZNK8QPainter7opacityEv opacity()
extern "C"
double
C_ZNK8QPainter7opacityEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->opacity();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 413, column 17>
//   // proto:  void QPainter::drawText(int x, int y, const QString & s);
// _ZN8QPainter8drawTextEiiRK7QString drawText(int, int, const class QString &)
extern "C"
void
C_ZN8QPainter8drawTextEiiRK7QString(void *qthis,
int arg1,
int arg2,
const QString* arg3) {
  ((QPainter*)qthis)->drawText(arg1,
arg2,
*((const QString*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 359, column 10>
//   // proto:  void QPainter::drawTiledPixmap(const QRectF & rect, const QPixmap & pm, const QPointF & offset);
// _ZN8QPainter15drawTiledPixmapERK6QRectFRK7QPixmapRK7QPointF drawTiledPixmap(const class QRectF &, const class QPixmap &, const class QPointF &)
extern "C"
void
C_ZN8QPainter15drawTiledPixmapERK6QRectFRK7QPixmapRK7QPointF(void *qthis,
const QRectF* arg1,
const QPixmap* arg2,
const QPointF* arg3) {
  ((QPainter*)qthis)->drawTiledPixmap(*((const QRectF*)arg1),
*((const QPixmap*)arg2),
*((const QPointF*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 205, column 10>
//   // proto:  void QPainter::setBackground(const QBrush & bg);
// _ZN8QPainter13setBackgroundERK6QBrush setBackground(const class QBrush &)
extern "C"
void
C_ZN8QPainter13setBackgroundERK6QBrush(void *qthis,
const QBrush* arg1) {
  ((QPainter*)qthis)->setBackground(*((const QBrush*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 424, column 11>
//   // proto:  QRect QPainter::boundingRect(const QRect & rect, int flags, const QString & text);
// _ZN8QPainter12boundingRectERK5QRectiRK7QString boundingRect(const class QRect &, int, const class QString &)
extern "C"
QRect*
C_ZN8QPainter12boundingRectERK5QRectiRK7QString(void *qthis,
const QRect* arg1,
int arg2,
const QString* arg3) {
  auto ret =
  ((QPainter*)qthis)->boundingRect(*((const QRect*)arg1),
arg2,
*((const QString*)arg3));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 344, column 10>
//   // proto:  void QPainter::drawChord(const QRectF & rect, int a, int alen);
// _ZN8QPainter9drawChordERK6QRectFii drawChord(const class QRectF &, int, int)
extern "C"
void
C_ZN8QPainter9drawChordERK6QRectFii(void *qthis,
const QRectF* arg1,
int arg2,
int arg3) {
  ((QPainter*)qthis)->drawChord(*((const QRectF*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 393, column 17>
//   // proto:  void QPainter::drawImage(const QRectF & r, const QImage & image);
// _ZN8QPainter9drawImageERK6QRectFRK6QImage drawImage(const class QRectF &, const class QImage &)
extern "C"
void
C_ZN8QPainter9drawImageERK6QRectFRK6QImage(void *qthis,
const QRectF* arg1,
const QImage* arg2) {
  ((QPainter*)qthis)->drawImage(*((const QRectF*)arg1),
*((const QImage*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 389, column 17>
//   // proto:  void QPainter::drawImage(const QPointF & p, const QImage & image, const QRectF & sr, Qt::ImageConversionFlags flags);
// _ZN8QPainter9drawImageERK7QPointFRK6QImageRK6QRectF6QFlagsIN2Qt19ImageConversionFlagEE drawImage(const class QPointF &, const class QImage &, const class QRectF &, Qt::ImageConversionFlags)
extern "C"
void
C_ZN8QPainter9drawImageERK7QPointFRK6QImageRK6QRectF6QFlagsIN2Qt19ImageConversionFlagEE(void *qthis,
const QPointF* arg1,
const QImage* arg2,
const QRectF* arg3,
Qt::ImageConversionFlags* arg4) {
  ((QPainter*)qthis)->drawImage(*((const QPointF*)arg1),
*((const QImage*)arg2),
*((const QRectF*)arg3),
*((Qt::ImageConversionFlags*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 223, column 10>
//   // proto:  void QPainter::setClipping(bool enable);
// _ZN8QPainter11setClippingEb setClipping(_Bool)
extern "C"
void
C_ZN8QPainter11setClippingEb(void *qthis,
bool arg1) {
  ((QPainter*)qthis)->setClipping(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 445, column 17>
//   // proto:  void QPainter::fillRect(int x, int y, int w, int h, Qt::BrushStyle style);
// _ZN8QPainter8fillRectEiiiiN2Qt10BrushStyleE fillRect(int, int, int, int, Qt::BrushStyle)
extern "C"
void
C_ZN8QPainter8fillRectEiiiiN2Qt10BrushStyleE(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
Qt::BrushStyle* arg5) {
  ((QPainter*)qthis)->fillRect(arg1,
arg2,
arg3,
arg4,
*((Qt::BrushStyle*)arg5));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 192, column 10>
//   // proto:  void QPainter::setBrush(const QBrush & brush);
// _ZN8QPainter8setBrushERK6QBrush setBrush(const class QBrush &)
extern "C"
void
C_ZN8QPainter8setBrushERK6QBrush(void *qthis,
const QBrush* arg1) {
  ((QPainter*)qthis)->setBrush(*((const QBrush*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 232, column 10>
//   // proto:  void QPainter::setMatrix(const QMatrix & matrix, bool combine);
// _ZN8QPainter9setMatrixERK7QMatrixb setMatrix(const class QMatrix &, _Bool)
extern "C"
void
C_ZN8QPainter9setMatrixERK7QMatrixb(void *qthis,
const QMatrix* arg1,
bool arg2) {
  ((QPainter*)qthis)->setMatrix(*((const QMatrix*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 312, column 17>
//   // proto:  void QPainter::drawRects(const QVector<QRect> & rectangles);
// _ZN8QPainter9drawRectsERK7QVectorI5QRectE drawRects(const QVector<class QRect> &)
extern "C"
void
C_ZN8QPainter9drawRectsERK7QVectorI5QRectE(void *qthis,
const QVector<QRect>* arg1) {
  ((QPainter*)qthis)->drawRects(*((const QVector<QRect>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 346, column 17>
//   // proto:  void QPainter::drawChord(const QRect & , int a, int alen);
// _ZN8QPainter9drawChordERK5QRectii drawChord(const class QRect &, int, int)
extern "C"
void
C_ZN8QPainter9drawChordERK5QRectii(void *qthis,
const QRect* arg1,
int arg2,
int arg3) {
  ((QPainter*)qthis)->drawChord(*((const QRect*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 453, column 10>
//   // proto:  void QPainter::setRenderHint(QPainter::RenderHint hint, bool on);
// _ZN8QPainter13setRenderHintENS_10RenderHintEb setRenderHint(enum QPainter::RenderHint, _Bool)
extern "C"
void
C_ZN8QPainter13setRenderHintENS_10RenderHintEb(void *qthis,
QPainter::RenderHint arg1,
bool arg2) {
  ((QPainter*)qthis)->setRenderHint(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 449, column 10>
//   // proto:  void QPainter::eraseRect(const QRectF & );
// _ZN8QPainter9eraseRectERK6QRectF eraseRect(const class QRectF &)
extern "C"
void
C_ZN8QPainter9eraseRectERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QPainter*)qthis)->eraseRect(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 262, column 17>
//   // proto:  void QPainter::translate(const QPoint & offset);
// _ZN8QPainter9translateERK6QPoint translate(const class QPoint &)
extern "C"
void
C_ZN8QPainter9translateERK6QPoint(void *qthis,
const QPoint* arg1) {
  ((QPainter*)qthis)->translate(*((const QPoint*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 274, column 10>
//   // proto:  bool QPainter::viewTransformEnabled();
// _ZNK8QPainter20viewTransformEnabledEv viewTransformEnabled()
extern "C"
bool
C_ZNK8QPainter20viewTransformEnabledEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->viewTransformEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 188, column 10>
//   // proto:  void QPainter::setPen(const QPen & pen);
// _ZN8QPainter6setPenERK4QPen setPen(const class QPen &)
extern "C"
void
C_ZN8QPainter6setPenERK4QPen(void *qthis,
const QPen* arg1) {
  ((QPainter*)qthis)->setPen(*((const QPen*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 296, column 10>
//   // proto:  void QPainter::drawLines(const QLineF * lines, int lineCount);
// _ZN8QPainter9drawLinesEPK6QLineFi drawLines(const class QLineF *, int)
extern "C"
void
C_ZN8QPainter9drawLinesEPK6QLineFi(void *qthis,
const QLineF * arg1,
int arg2) {
  ((QPainter*)qthis)->drawLines(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 201, column 17>
//   // proto:  void QPainter::setBrushOrigin(int x, int y);
// _ZN8QPainter14setBrushOriginEii setBrushOrigin(int, int)
extern "C"
void
C_ZN8QPainter14setBrushOriginEii(void *qthis,
int arg1,
int arg2) {
  ((QPainter*)qthis)->setBrushOrigin(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 246, column 23>
//   // proto:  const QTransform & QPainter::worldTransform();
// _ZNK8QPainter14worldTransformEv worldTransform()
extern "C"
QTransform*
C_ZNK8QPainter14worldTransformEv(void *qthis) {
  auto& ret =
  ((QPainter*)qthis)->worldTransform();
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 311, column 10>
//   // proto:  void QPainter::drawRects(const QRect * rects, int rectCount);
// _ZN8QPainter9drawRectsEPK5QRecti drawRects(const class QRect *, int)
extern "C"
void
C_ZN8QPainter9drawRectsEPK5QRecti(void *qthis,
const QRect * arg1,
int arg2) {
  ((QPainter*)qthis)->drawRects(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 319, column 17>
//   // proto:  void QPainter::drawEllipse(const QPoint & center, int rx, int ry);
// _ZN8QPainter11drawEllipseERK6QPointii drawEllipse(const class QPoint &, int, int)
extern "C"
void
C_ZN8QPainter11drawEllipseERK6QPointii(void *qthis,
const QPoint* arg1,
int arg2,
int arg3) {
  ((QPainter*)qthis)->drawEllipse(*((const QPoint*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 338, column 17>
//   // proto:  void QPainter::drawArc(int x, int y, int w, int h, int a, int alen);
// _ZN8QPainter7drawArcEiiiiii drawArc(int, int, int, int, int, int)
extern "C"
void
C_ZN8QPainter7drawArcEiiiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
int arg5,
int arg6) {
  ((QPainter*)qthis)->drawArc(arg1,
arg2,
arg3,
arg4,
arg5,
arg6);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 322, column 17>
//   // proto:  void QPainter::drawPolyline(const QPolygonF & polyline);
// _ZN8QPainter12drawPolylineERK9QPolygonF drawPolyline(const class QPolygonF &)
extern "C"
void
C_ZN8QPainter12drawPolylineERK9QPolygonF(void *qthis,
const QPolygonF* arg1) {
  ((QPainter*)qthis)->drawPolyline(*((const QPolygonF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 224, column 10>
//   // proto:  bool QPainter::hasClipping();
// _ZNK8QPainter11hasClippingEv hasClipping()
extern "C"
bool
C_ZNK8QPainter11hasClippingEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->hasClipping();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 368, column 10>
//   // proto:  void QPainter::drawPixmap(const QRectF & targetRect, const QPixmap & pixmap, const QRectF & sourceRect);
// _ZN8QPainter10drawPixmapERK6QRectFRK7QPixmapS2_ drawPixmap(const class QRectF &, const class QPixmap &, const class QRectF &)
extern "C"
void
C_ZN8QPainter10drawPixmapERK6QRectFRK7QPixmapS2_(void *qthis,
const QRectF* arg1,
const QPixmap* arg2,
const QRectF* arg3) {
  ((QPainter*)qthis)->drawPixmap(*((const QRectF*)arg1),
*((const QPixmap*)arg2),
*((const QRectF*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 409, column 17>
//   // proto:  void QPainter::drawStaticText(int left, int top, const QStaticText & staticText);
// _ZN8QPainter14drawStaticTextEiiRK11QStaticText drawStaticText(int, int, const class QStaticText &)
extern "C"
void
C_ZN8QPainter14drawStaticTextEiiRK11QStaticText(void *qthis,
int arg1,
int arg2,
const QStaticText* arg3) {
  ((QPainter*)qthis)->drawStaticText(arg1,
arg2,
*((const QStaticText*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 277, column 10>
//   // proto:  void QPainter::strokePath(const QPainterPath & path, const QPen & pen);
// _ZN8QPainter10strokePathERK12QPainterPathRK4QPen strokePath(const class QPainterPath &, const class QPen &)
extern "C"
void
C_ZN8QPainter10strokePathERK12QPainterPathRK4QPen(void *qthis,
const QPainterPath* arg1,
const QPen* arg2) {
  ((QPainter*)qthis)->strokePath(*((const QPainterPath*)arg1),
*((const QPen*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 372, column 17>
//   // proto:  void QPainter::drawPixmap(int x, int y, const QPixmap & pm, int sx, int sy, int sw, int sh);
// _ZN8QPainter10drawPixmapEiiRK7QPixmapiiii drawPixmap(int, int, const class QPixmap &, int, int, int, int)
extern "C"
void
C_ZN8QPainter10drawPixmapEiiRK7QPixmapiiii(void *qthis,
int arg1,
int arg2,
const QPixmap* arg3,
int arg4,
int arg5,
int arg6,
int arg7) {
  ((QPainter*)qthis)->drawPixmap(arg1,
arg2,
*((const QPixmap*)arg3),
arg4,
arg5,
arg6,
arg7);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 309, column 10>
//   // proto:  void QPainter::drawRects(const QRectF * rects, int rectCount);
// _ZN8QPainter9drawRectsEPK6QRectFi drawRects(const class QRectF *, int)
extern "C"
void
C_ZN8QPainter9drawRectsEPK6QRectFi(void *qthis,
const QRectF * arg1,
int arg2) {
  ((QPainter*)qthis)->drawRects(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 333, column 10>
//   // proto:  void QPainter::drawConvexPolygon(const QPoint * points, int pointCount);
// _ZN8QPainter17drawConvexPolygonEPK6QPointi drawConvexPolygon(const class QPoint *, int)
extern "C"
void
C_ZN8QPainter17drawConvexPolygonEPK6QPointi(void *qthis,
const QPoint * arg1,
int arg2) {
  ((QPainter*)qthis)->drawConvexPolygon(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 328, column 10>
//   // proto:  void QPainter::drawPolygon(const QPoint * points, int pointCount, Qt::FillRule fillRule);
// _ZN8QPainter11drawPolygonEPK6QPointiN2Qt8FillRuleE drawPolygon(const class QPoint *, int, Qt::FillRule)
extern "C"
void
C_ZN8QPainter11drawPolygonEPK6QPointiN2Qt8FillRuleE(void *qthis,
const QPoint * arg1,
int arg2,
Qt::FillRule* arg3) {
  ((QPainter*)qthis)->drawPolygon(arg1,
arg2,
*((Qt::FillRule*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 279, column 10>
//   // proto:  void QPainter::drawPath(const QPainterPath & path);
// _ZN8QPainter8drawPathERK12QPainterPath drawPath(const class QPainterPath &)
extern "C"
void
C_ZN8QPainter8drawPathERK12QPainterPath(void *qthis,
const QPainterPath* arg1) {
  ((QPainter*)qthis)->drawPath(*((const QPainterPath*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 378, column 17>
//   // proto:  void QPainter::drawPixmap(int x, int y, const QPixmap & pm);
// _ZN8QPainter10drawPixmapEiiRK7QPixmap drawPixmap(int, int, const class QPixmap &)
extern "C"
void
C_ZN8QPainter10drawPixmapEiiRK7QPixmap(void *qthis,
int arg1,
int arg2,
const QPixmap* arg3) {
  ((QPainter*)qthis)->drawPixmap(arg1,
arg2,
*((const QPixmap*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 248, column 13>
//   // proto:  QMatrix QPainter::combinedMatrix();
// _ZNK8QPainter14combinedMatrixEv combinedMatrix()
extern "C"
QMatrix*
C_ZNK8QPainter14combinedMatrixEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->combinedMatrix();
  return new QMatrix(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 251, column 10>
//   // proto:  void QPainter::setMatrixEnabled(bool enabled);
// _ZN8QPainter16setMatrixEnabledEb setMatrixEnabled(_Bool)
extern "C"
void
C_ZN8QPainter16setMatrixEnabledEb(void *qthis,
bool arg1) {
  ((QPainter*)qthis)->setMatrixEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 324, column 17>
//   // proto:  void QPainter::drawPolyline(const QPolygon & polygon);
// _ZN8QPainter12drawPolylineERK8QPolygon drawPolyline(const class QPolygon &)
extern "C"
void
C_ZN8QPainter12drawPolylineERK8QPolygon(void *qthis,
const QPolygon* arg1) {
  ((QPainter*)qthis)->drawPolyline(*((const QPolygon*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 361, column 17>
//   // proto:  void QPainter::drawTiledPixmap(const QRect & , const QPixmap & , const QPoint & );
// _ZN8QPainter15drawTiledPixmapERK5QRectRK7QPixmapRK6QPoint drawTiledPixmap(const class QRect &, const class QPixmap &, const class QPoint &)
extern "C"
void
C_ZN8QPainter15drawTiledPixmapERK5QRectRK7QPixmapRK6QPoint(void *qthis,
const QRect* arg1,
const QPixmap* arg2,
const QPoint* arg3) {
  ((QPainter*)qthis)->drawTiledPixmap(*((const QRect*)arg1),
*((const QPixmap*)arg2),
*((const QPoint*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 182, column 10>
//   // proto:  void QPainter::setFont(const QFont & f);
// _ZN8QPainter7setFontERK5QFont setFont(const class QFont &)
extern "C"
void
C_ZN8QPainter7setFontERK5QFont(void *qthis,
const QFont* arg1) {
  ((QPainter*)qthis)->setFont(*((const QFont*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 345, column 17>
//   // proto:  void QPainter::drawChord(int x, int y, int w, int h, int a, int alen);
// _ZN8QPainter9drawChordEiiiiii drawChord(int, int, int, int, int, int)
extern "C"
void
C_ZN8QPainter9drawChordEiiiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
int arg5,
int arg6) {
  ((QPainter*)qthis)->drawChord(arg1,
arg2,
arg3,
arg4,
arg5,
arg6);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 380, column 17>
//   // proto:  void QPainter::drawPixmap(int x, int y, int w, int h, const QPixmap & pm);
// _ZN8QPainter10drawPixmapEiiiiRK7QPixmap drawPixmap(int, int, int, int, const class QPixmap &)
extern "C"
void
C_ZN8QPainter10drawPixmapEiiiiRK7QPixmap(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
const QPixmap* arg5) {
  ((QPainter*)qthis)->drawPixmap(arg1,
arg2,
arg3,
arg4,
*((const QPixmap*)arg5));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 266, column 10>
//   // proto:  void QPainter::setWindow(const QRect & window);
// _ZN8QPainter9setWindowERK5QRect setWindow(const class QRect &)
extern "C"
void
C_ZN8QPainter9setWindowERK5QRect(void *qthis,
const QRect* arg1) {
  ((QPainter*)qthis)->setWindow(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 234, column 20>
//   // proto:  const QMatrix & QPainter::deviceMatrix();
// _ZNK8QPainter12deviceMatrixEv deviceMatrix()
extern "C"
QMatrix*
C_ZNK8QPainter12deviceMatrixEv(void *qthis) {
  auto& ret =
  ((QPainter*)qthis)->deviceMatrix();
  return new QMatrix(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 221, column 10>
//   // proto:  void QPainter::setClipPath(const QPainterPath & path, Qt::ClipOperation op);
// _ZN8QPainter11setClipPathERK12QPainterPathN2Qt13ClipOperationE setClipPath(const class QPainterPath &, Qt::ClipOperation)
extern "C"
void
C_ZN8QPainter11setClipPathERK12QPainterPathN2Qt13ClipOperationE(void *qthis,
const QPainterPath* arg1,
Qt::ClipOperation* arg2) {
  ((QPainter*)qthis)->setClipPath(*((const QPainterPath*)arg1),
*((Qt::ClipOperation*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 298, column 10>
//   // proto:  void QPainter::drawLines(const QPointF * pointPairs, int lineCount);
// _ZN8QPainter9drawLinesEPK7QPointFi drawLines(const class QPointF *, int)
extern "C"
void
C_ZN8QPainter9drawLinesEPK7QPointFi(void *qthis,
const QPointF * arg1,
int arg2) {
  ((QPainter*)qthis)->drawLines(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 376, column 10>
//   // proto:  void QPainter::drawPixmap(const QPointF & p, const QPixmap & pm);
// _ZN8QPainter10drawPixmapERK7QPointFRK7QPixmap drawPixmap(const class QPointF &, const class QPixmap &)
extern "C"
void
C_ZN8QPainter10drawPixmapERK7QPointFRK7QPixmap(void *qthis,
const QPointF* arg1,
const QPixmap* arg2) {
  ((QPainter*)qthis)->drawPixmap(*((const QPointF*)arg1),
*((const QPixmap*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 425, column 18>
//   // proto:  QRect QPainter::boundingRect(int x, int y, int w, int h, int flags, const QString & text);
// _ZN8QPainter12boundingRectEiiiiiRK7QString boundingRect(int, int, int, int, int, const class QString &)
extern "C"
QRect*
C_ZN8QPainter12boundingRectEiiiiiRK7QString(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
int arg5,
const QString* arg6) {
  auto ret =
  ((QPainter*)qthis)->boundingRect(arg1,
arg2,
arg3,
arg4,
arg5,
*((const QString*)arg6));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 300, column 10>
//   // proto:  void QPainter::drawLines(const QLine * lines, int lineCount);
// _ZN8QPainter9drawLinesEPK5QLinei drawLines(const class QLine *, int)
extern "C"
void
C_ZN8QPainter9drawLinesEPK5QLinei(void *qthis,
const QLine * arg1,
int arg2) {
  ((QPainter*)qthis)->drawLines(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 341, column 17>
//   // proto:  void QPainter::drawPie(int x, int y, int w, int h, int a, int alen);
// _ZN8QPainter7drawPieEiiiiii drawPie(int, int, int, int, int, int)
extern "C"
void
C_ZN8QPainter7drawPieEiiiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
int arg5,
int arg6) {
  ((QPainter*)qthis)->drawPie(arg1,
arg2,
arg3,
arg4,
arg5,
arg6);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 375, column 17>
//   // proto:  void QPainter::drawPixmap(const QPoint & p, const QPixmap & pm, const QRect & sr);
// _ZN8QPainter10drawPixmapERK6QPointRK7QPixmapRK5QRect drawPixmap(const class QPoint &, const class QPixmap &, const class QRect &)
extern "C"
void
C_ZN8QPainter10drawPixmapERK6QPointRK7QPixmapRK5QRect(void *qthis,
const QPoint* arg1,
const QPixmap* arg2,
const QRect* arg3) {
  ((QPainter*)qthis)->drawPixmap(*((const QPoint*)arg1),
*((const QPixmap*)arg2),
*((const QRect*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 387, column 17>
//   // proto:  void QPainter::drawImage(const QRect & targetRect, const QImage & image, const QRect & sourceRect, Qt::ImageConversionFlags flags);
// _ZN8QPainter9drawImageERK5QRectRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE drawImage(const class QRect &, const class QImage &, const class QRect &, Qt::ImageConversionFlags)
extern "C"
void
C_ZN8QPainter9drawImageERK5QRectRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE(void *qthis,
const QRect* arg1,
const QImage* arg2,
const QRect* arg3,
Qt::ImageConversionFlags* arg4) {
  ((QPainter*)qthis)->drawImage(*((const QRect*)arg1),
*((const QImage*)arg2),
*((const QRect*)arg3),
*((Qt::ImageConversionFlags*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 407, column 10>
//   // proto:  void QPainter::drawStaticText(const QPointF & topLeftPosition, const QStaticText & staticText);
// _ZN8QPainter14drawStaticTextERK7QPointFRK11QStaticText drawStaticText(const class QPointF &, const class QStaticText &)
extern "C"
void
C_ZN8QPainter14drawStaticTextERK7QPointFRK11QStaticText(void *qthis,
const QPointF* arg1,
const QStaticText* arg2) {
  ((QPainter*)qthis)->drawStaticText(*((const QPointF*)arg1),
*((const QStaticText*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 254, column 10>
//   // proto:  void QPainter::setWorldMatrixEnabled(bool enabled);
// _ZN8QPainter21setWorldMatrixEnabledEb setWorldMatrixEnabled(_Bool)
extern "C"
void
C_ZN8QPainter21setWorldMatrixEnabledEb(void *qthis,
bool arg1) {
  ((QPainter*)qthis)->setWorldMatrixEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 288, column 17>
//   // proto:  void QPainter::drawPoints(const QPolygon & points);
// _ZN8QPainter10drawPointsERK8QPolygon drawPoints(const class QPolygon &)
extern "C"
void
C_ZN8QPainter10drawPointsERK8QPolygon(void *qthis,
const QPolygon* arg1) {
  ((QPainter*)qthis)->drawPoints(*((const QPolygon*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 198, column 16>
//   // proto:  Qt::BGMode QPainter::backgroundMode();
// _ZNK8QPainter14backgroundModeEv backgroundMode()
extern "C"
Qt::BGMode
C_ZNK8QPainter14backgroundModeEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->backgroundMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 310, column 17>
//   // proto:  void QPainter::drawRects(const QVector<QRectF> & rectangles);
// _ZN8QPainter9drawRectsERK7QVectorI6QRectFE drawRects(const QVector<class QRectF> &)
extern "C"
void
C_ZN8QPainter9drawRectsERK7QVectorI6QRectFE(void *qthis,
const QVector<QRectF>* arg1) {
  ((QPainter*)qthis)->drawRects(*((const QVector<QRectF>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 397, column 17>
//   // proto:  void QPainter::drawImage(int x, int y, const QImage & image, int sx, int sy, int sw, int sh, Qt::ImageConversionFlags flags);
// _ZN8QPainter9drawImageEiiRK6QImageiiii6QFlagsIN2Qt19ImageConversionFlagEE drawImage(int, int, const class QImage &, int, int, int, int, Qt::ImageConversionFlags)
extern "C"
void
C_ZN8QPainter9drawImageEiiRK6QImageiiii6QFlagsIN2Qt19ImageConversionFlagEE(void *qthis,
int arg1,
int arg2,
const QImage* arg3,
int arg4,
int arg5,
int arg6,
int arg7,
Qt::ImageConversionFlags* arg8) {
  ((QPainter*)qthis)->drawImage(arg1,
arg2,
*((const QImage*)arg3),
arg4,
arg5,
arg6,
arg7,
*((Qt::ImageConversionFlags*)arg8));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 365, column 17>
//   // proto:  void QPainter::drawPicture(const QPoint & p, const QPicture & picture);
// _ZN8QPainter11drawPictureERK6QPointRK8QPicture drawPicture(const class QPoint &, const class QPicture &)
extern "C"
void
C_ZN8QPainter11drawPictureERK6QPointRK8QPicture(void *qthis,
const QPoint* arg1,
const QPicture* arg2) {
  ((QPainter*)qthis)->drawPicture(*((const QPoint*)arg1),
*((const QPicture*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 447, column 17>
//   // proto:  void QPainter::fillRect(const QRectF & r, Qt::BrushStyle style);
// _ZN8QPainter8fillRectERK6QRectFN2Qt10BrushStyleE fillRect(const class QRectF &, Qt::BrushStyle)
extern "C"
void
C_ZN8QPainter8fillRectERK6QRectFN2Qt10BrushStyleE(void *qthis,
const QRectF* arg1,
Qt::BrushStyle* arg2) {
  ((QPainter*)qthis)->fillRect(*((const QRectF*)arg1),
*((Qt::BrushStyle*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 443, column 17>
//   // proto:  void QPainter::fillRect(const QRectF & r, Qt::GlobalColor c);
// _ZN8QPainter8fillRectERK6QRectFN2Qt11GlobalColorE fillRect(const class QRectF &, Qt::GlobalColor)
extern "C"
void
C_ZN8QPainter8fillRectERK6QRectFN2Qt11GlobalColorE(void *qthis,
const QRectF* arg1,
Qt::GlobalColor* arg2) {
  ((QPainter*)qthis)->fillRect(*((const QRectF*)arg1),
*((Qt::GlobalColor*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 189, column 10>
//   // proto:  void QPainter::setPen(Qt::PenStyle style);
// _ZN8QPainter6setPenEN2Qt8PenStyleE setPen(Qt::PenStyle)
extern "C"
void
C_ZN8QPainter6setPenEN2Qt8PenStyleE(void *qthis,
Qt::PenStyle* arg1) {
  ((QPainter*)qthis)->setPen(*((Qt::PenStyle*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 301, column 17>
//   // proto:  void QPainter::drawLines(const QVector<QLine> & lines);
// _ZN8QPainter9drawLinesERK7QVectorI5QLineE drawLines(const QVector<class QLine> &)
extern "C"
void
C_ZN8QPainter9drawLinesERK7QVectorI5QLineE(void *qthis,
const QVector<QLine>* arg1) {
  ((QPainter*)qthis)->drawLines(*((const QVector<QLine>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 306, column 17>
//   // proto:  void QPainter::drawRect(int x1, int y1, int w, int h);
// _ZN8QPainter8drawRectEiiii drawRect(int, int, int, int)
extern "C"
void
C_ZN8QPainter8drawRectEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QPainter*)qthis)->drawRect(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 314, column 10>
//   // proto:  void QPainter::drawEllipse(const QRectF & r);
// _ZN8QPainter11drawEllipseERK6QRectF drawEllipse(const class QRectF &)
extern "C"
void
C_ZN8QPainter11drawEllipseERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QPainter*)qthis)->drawEllipse(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 305, column 17>
//   // proto:  void QPainter::drawRect(const QRectF & rect);
// _ZN8QPainter8drawRectERK6QRectF drawRect(const class QRectF &)
extern "C"
void
C_ZN8QPainter8drawRectERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QPainter*)qthis)->drawRect(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 285, column 10>
//   // proto:  void QPainter::drawPoints(const QPointF * points, int pointCount);
// _ZN8QPainter10drawPointsEPK7QPointFi drawPoints(const class QPointF *, int)
extern "C"
void
C_ZN8QPainter10drawPointsEPK7QPointFi(void *qthis,
const QPointF * arg1,
int arg2) {
  ((QPainter*)qthis)->drawPoints(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 401, column 25>
//   // proto:  Qt::LayoutDirection QPainter::layoutDirection();
// _ZNK8QPainter15layoutDirectionEv layoutDirection()
extern "C"
Qt::LayoutDirection
C_ZNK8QPainter15layoutDirectionEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->layoutDirection();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 212, column 13>
//   // proto:  QRegion QPainter::clipRegion();
// _ZNK8QPainter10clipRegionEv clipRegion()
extern "C"
QRegion*
C_ZNK8QPainter10clipRegionEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->clipRegion();
  return new QRegion(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 417, column 10>
//   // proto:  void QPainter::drawText(const QRectF & r, int flags, const QString & text, QRectF * br);
// _ZN8QPainter8drawTextERK6QRectFiRK7QStringPS0_ drawText(const class QRectF &, int, const class QString &, class QRectF *)
extern "C"
void
C_ZN8QPainter8drawTextERK6QRectFiRK7QStringPS0_(void *qthis,
const QRectF* arg1,
int arg2,
const QString* arg3,
QRectF * arg4) {
  ((QPainter*)qthis)->drawText(*((const QRectF*)arg1),
arg2,
*((const QString*)arg3),
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 456, column 17>
//   // proto:  bool QPainter::testRenderHint(QPainter::RenderHint hint);
// _ZNK8QPainter14testRenderHintENS_10RenderHintE testRenderHint(enum QPainter::RenderHint)
extern "C"
bool
C_ZNK8QPainter14testRenderHintENS_10RenderHintE(void *qthis,
QPainter::RenderHint arg1) {
  auto ret =
  ((QPainter*)qthis)->testRenderHint(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 290, column 17>
//   // proto:  void QPainter::drawLine(const QLineF & line);
// _ZN8QPainter8drawLineERK6QLineF drawLine(const class QLineF &)
extern "C"
void
C_ZN8QPainter8drawLineERK6QLineF(void *qthis,
const QLineF* arg1) {
  ((QPainter*)qthis)->drawLine(*((const QLineF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 294, column 17>
//   // proto:  void QPainter::drawLine(const QPointF & p1, const QPointF & p2);
// _ZN8QPainter8drawLineERK7QPointFS2_ drawLine(const class QPointF &, const class QPointF &)
extern "C"
void
C_ZN8QPainter8drawLineERK7QPointFS2_(void *qthis,
const QPointF* arg1,
const QPointF* arg2) {
  ((QPainter*)qthis)->drawLine(*((const QPointF*)arg1),
*((const QPointF*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 382, column 10>
//   // proto:  void QPainter::drawPixmapFragments(const QPainter::PixmapFragment * fragments, int fragmentCount, const QPixmap & pixmap, PixmapFragmentHints hints);
// _ZN8QPainter19drawPixmapFragmentsEPKNS_14PixmapFragmentEiRK7QPixmap6QFlagsINS_18PixmapFragmentHintEE drawPixmapFragments(const class QPainter::PixmapFragment *, int, const class QPixmap &, PixmapFragmentHints)
extern "C"
void
C_ZN8QPainter19drawPixmapFragmentsEPKNS_14PixmapFragmentEiRK7QPixmap6QFlagsINS_18PixmapFragmentHintEE(void *qthis,
const QPainter::PixmapFragment * arg1,
int arg2,
const QPixmap* arg3,
QPainter::PixmapFragmentHints arg4) {
  ((QPainter*)qthis)->drawPixmapFragments(arg1,
arg2,
*((const QPixmap*)arg3),
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 379, column 17>
//   // proto:  void QPainter::drawPixmap(const QRect & r, const QPixmap & pm);
// _ZN8QPainter10drawPixmapERK5QRectRK7QPixmap drawPixmap(const class QRect &, const class QPixmap &)
extern "C"
void
C_ZN8QPainter10drawPixmapERK5QRectRK7QPixmap(void *qthis,
const QRect* arg1,
const QPixmap* arg2) {
  ((QPainter*)qthis)->drawPixmap(*((const QRect*)arg1),
*((const QPixmap*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 360, column 17>
//   // proto:  void QPainter::drawTiledPixmap(int x, int y, int w, int h, const QPixmap & , int sx, int sy);
// _ZN8QPainter15drawTiledPixmapEiiiiRK7QPixmapii drawTiledPixmap(int, int, int, int, const class QPixmap &, int, int)
extern "C"
void
C_ZN8QPainter15drawTiledPixmapEiiiiRK7QPixmapii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
const QPixmap* arg5,
int arg6,
int arg7) {
  ((QPainter*)qthis)->drawTiledPixmap(arg1,
arg2,
arg3,
arg4,
*((const QPixmap*)arg5),
arg6,
arg7);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 352, column 17>
//   // proto:  void QPainter::drawRoundedRect(const QRect & rect, qreal xRadius, qreal yRadius, Qt::SizeMode mode);
// _ZN8QPainter15drawRoundedRectERK5QRectddN2Qt8SizeModeE drawRoundedRect(const class QRect &, qreal, qreal, Qt::SizeMode)
extern "C"
void
C_ZN8QPainter15drawRoundedRectERK5QRectddN2Qt8SizeModeE(void *qthis,
const QRect* arg1,
qreal arg2,
qreal arg3,
Qt::SizeMode* arg4) {
  ((QPainter*)qthis)->drawRoundedRect(*((const QRect*)arg1),
arg2,
arg3,
*((Qt::SizeMode*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 126, column 19>
//   // proto:  QPaintDevice * QPainter::device();
// _ZNK8QPainter6deviceEv device()
extern "C"
void*
C_ZNK8QPainter6deviceEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->device();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 270, column 10>
//   // proto:  void QPainter::setViewport(const QRect & viewport);
// _ZN8QPainter11setViewportERK5QRect setViewport(const class QRect &)
extern "C"
void
C_ZN8QPainter11setViewportERK5QRect(void *qthis,
const QRect* arg1) {
  ((QPainter*)qthis)->setViewport(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 441, column 17>
//   // proto:  void QPainter::fillRect(int x, int y, int w, int h, Qt::GlobalColor c);
// _ZN8QPainter8fillRectEiiiiN2Qt11GlobalColorE fillRect(int, int, int, int, Qt::GlobalColor)
extern "C"
void
C_ZN8QPainter8fillRectEiiiiN2Qt11GlobalColorE(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
Qt::GlobalColor* arg5) {
  ((QPainter*)qthis)->fillRect(arg1,
arg2,
arg3,
arg4,
*((Qt::GlobalColor*)arg5));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 439, column 10>
//   // proto:  void QPainter::fillRect(const QRect & , const QColor & color);
// _ZN8QPainter8fillRectERK5QRectRK6QColor fillRect(const class QRect &, const class QColor &)
extern "C"
void
C_ZN8QPainter8fillRectERK5QRectRK6QColor(void *qthis,
const QRect* arg1,
const QColor* arg2) {
  ((QPainter*)qthis)->fillRect(*((const QRect*)arg1),
*((const QColor*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 203, column 10>
//   // proto:  void QPainter::setBrushOrigin(const QPointF & );
// _ZN8QPainter14setBrushOriginERK7QPointF setBrushOrigin(const class QPointF &)
extern "C"
void
C_ZN8QPainter14setBrushOriginERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QPainter*)qthis)->setBrushOrigin(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 219, column 10>
//   // proto:  void QPainter::setClipRegion(const QRegion & , Qt::ClipOperation op);
// _ZN8QPainter13setClipRegionERK7QRegionN2Qt13ClipOperationE setClipRegion(const class QRegion &, Qt::ClipOperation)
extern "C"
void
C_ZN8QPainter13setClipRegionERK7QRegionN2Qt13ClipOperationE(void *qthis,
const QRegion* arg1,
Qt::ClipOperation* arg2) {
  ((QPainter*)qthis)->setClipRegion(*((const QRegion*)arg1),
*((Qt::ClipOperation*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 430, column 17>
//   // proto:  void QPainter::drawTextItem(int x, int y, const QTextItem & ti);
// _ZN8QPainter12drawTextItemEiiRK9QTextItem drawTextItem(int, int, const class QTextItem &)
extern "C"
void
C_ZN8QPainter12drawTextItemEiiRK9QTextItem(void *qthis,
int arg1,
int arg2,
const QTextItem* arg3) {
  ((QPainter*)qthis)->drawTextItem(arg1,
arg2,
*((const QTextItem*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 391, column 17>
//   // proto:  void QPainter::drawImage(const QPoint & p, const QImage & image, const QRect & sr, Qt::ImageConversionFlags flags);
// _ZN8QPainter9drawImageERK6QPointRK6QImageRK5QRect6QFlagsIN2Qt19ImageConversionFlagEE drawImage(const class QPoint &, const class QImage &, const class QRect &, Qt::ImageConversionFlags)
extern "C"
void
C_ZN8QPainter9drawImageERK6QPointRK6QImageRK5QRect6QFlagsIN2Qt19ImageConversionFlagEE(void *qthis,
const QPoint* arg1,
const QImage* arg2,
const QRect* arg3,
Qt::ImageConversionFlags* arg4) {
  ((QPainter*)qthis)->drawImage(*((const QPoint*)arg1),
*((const QImage*)arg2),
*((const QRect*)arg3),
*((Qt::ImageConversionFlags*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 123, column 14>
//   // proto:  void QPainter::QPainter(QPaintDevice * );
extern "C"
QPainter*
C_ZN8QPainterC2EP12QPaintDevice(QPaintDevice * arg1) {
  auto ret = new QPainter(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 370, column 17>
//   // proto:  void QPainter::drawPixmap(int x, int y, int w, int h, const QPixmap & pm, int sx, int sy, int sw, int sh);
// _ZN8QPainter10drawPixmapEiiiiRK7QPixmapiiii drawPixmap(int, int, int, int, const class QPixmap &, int, int, int, int)
extern "C"
void
C_ZN8QPainter10drawPixmapEiiiiRK7QPixmapiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
const QPixmap* arg5,
int arg6,
int arg7,
int arg8,
int arg9) {
  ((QPainter*)qthis)->drawPixmap(arg1,
arg2,
arg3,
arg4,
*((const QPixmap*)arg5),
arg6,
arg7,
arg8,
arg9);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 396, column 17>
//   // proto:  void QPainter::drawImage(const QPoint & p, const QImage & image);
// _ZN8QPainter9drawImageERK6QPointRK6QImage drawImage(const class QPoint &, const class QImage &)
extern "C"
void
C_ZN8QPainter9drawImageERK6QPointRK6QImage(void *qthis,
const QPoint* arg1,
const QImage* arg2) {
  ((QPainter*)qthis)->drawImage(*((const QPoint*)arg1),
*((const QImage*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 342, column 17>
//   // proto:  void QPainter::drawPie(const QRect & , int a, int alen);
// _ZN8QPainter7drawPieERK5QRectii drawPie(const class QRect &, int, int)
extern "C"
void
C_ZN8QPainter7drawPieERK5QRectii(void *qthis,
const QRect* arg1,
int arg2,
int arg3) {
  ((QPainter*)qthis)->drawPie(*((const QRect*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 431, column 17>
//   // proto:  void QPainter::drawTextItem(const QPoint & p, const QTextItem & ti);
// _ZN8QPainter12drawTextItemERK6QPointRK9QTextItem drawTextItem(const class QPoint &, const class QTextItem &)
extern "C"
void
C_ZN8QPainter12drawTextItemERK6QPointRK9QTextItem(void *qthis,
const QPoint* arg1,
const QTextItem* arg2) {
  ((QPainter*)qthis)->drawTextItem(*((const QPoint*)arg1),
*((const QTextItem*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 302, column 10>
//   // proto:  void QPainter::drawLines(const QPoint * pointPairs, int lineCount);
// _ZN8QPainter9drawLinesEPK6QPointi drawLines(const class QPoint *, int)
extern "C"
void
C_ZN8QPainter9drawLinesEPK6QPointi(void *qthis,
const QPoint * arg1,
int arg2) {
  ((QPainter*)qthis)->drawLines(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 364, column 17>
//   // proto:  void QPainter::drawPicture(int x, int y, const QPicture & picture);
// _ZN8QPainter11drawPictureEiiRK8QPicture drawPicture(int, int, const class QPicture &)
extern "C"
void
C_ZN8QPainter11drawPictureEiiRK8QPicture(void *qthis,
int arg1,
int arg2,
const QPicture* arg3) {
  ((QPainter*)qthis)->drawPicture(arg1,
arg2,
*((const QPicture*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 228, column 10>
//   // proto:  void QPainter::save();
// _ZN8QPainter4saveEv save()
extern "C"
void
C_ZN8QPainter4saveEv(void *qthis) {
  ((QPainter*)qthis)->save();
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 263, column 17>
//   // proto:  void QPainter::translate(qreal dx, qreal dy);
// _ZN8QPainter9translateEdd translate(qreal, qreal)
extern "C"
void
C_ZN8QPainter9translateEdd(void *qthis,
qreal arg1,
qreal arg2) {
  ((QPainter*)qthis)->translate(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 249, column 16>
//   // proto:  QTransform QPainter::combinedTransform();
// _ZNK8QPainter17combinedTransformEv combinedTransform()
extern "C"
QTransform*
C_ZNK8QPainter17combinedTransformEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->combinedTransform();
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 129, column 10>
//   // proto:  bool QPainter::end();
// _ZN8QPainter3endEv end()
extern "C"
bool
C_ZN8QPainter3endEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->end();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 271, column 17>
//   // proto:  void QPainter::setViewport(int x, int y, int w, int h);
// _ZN8QPainter11setViewportEiiii setViewport(int, int, int, int)
extern "C"
void
C_ZN8QPainter11setViewportEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QPainter*)qthis)->setViewport(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 357, column 17>
//   // proto:  void QPainter::drawRoundRect(const QRect & r, int xround, int yround);
// _ZN8QPainter13drawRoundRectERK5QRectii drawRoundRect(const class QRect &, int, int)
extern "C"
void
C_ZN8QPainter13drawRoundRectERK5QRectii(void *qthis,
const QRect* arg1,
int arg2,
int arg3) {
  ((QPainter*)qthis)->drawRoundRect(*((const QRect*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 245, column 10>
//   // proto:  void QPainter::setWorldTransform(const QTransform & matrix, bool combine);
// _ZN8QPainter17setWorldTransformERK10QTransformb setWorldTransform(const class QTransform &, _Bool)
extern "C"
void
C_ZN8QPainter17setWorldTransformERK10QTransformb(void *qthis,
const QTransform* arg1,
bool arg2) {
  ((QPainter*)qthis)->setWorldTransform(*((const QTransform*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 286, column 17>
//   // proto:  void QPainter::drawPoints(const QPolygonF & points);
// _ZN8QPainter10drawPointsERK9QPolygonF drawPoints(const class QPolygonF &)
extern "C"
void
C_ZN8QPainter10drawPointsERK9QPolygonF(void *qthis,
const QPolygonF* arg1) {
  ((QPainter*)qthis)->drawPoints(*((const QPolygonF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 229, column 10>
//   // proto:  void QPainter::restore();
// _ZN8QPainter7restoreEv restore()
extern "C"
void
C_ZN8QPainter7restoreEv(void *qthis) {
  ((QPainter*)qthis)->restore();
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 408, column 17>
//   // proto:  void QPainter::drawStaticText(const QPoint & topLeftPosition, const QStaticText & staticText);
// _ZN8QPainter14drawStaticTextERK6QPointRK11QStaticText drawStaticText(const class QPoint &, const class QStaticText &)
extern "C"
void
C_ZN8QPainter14drawStaticTextERK6QPointRK11QStaticText(void *qthis,
const QPoint* arg1,
const QStaticText* arg2) {
  ((QPainter*)qthis)->drawStaticText(*((const QPoint*)arg1),
*((const QStaticText*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 423, column 12>
//   // proto:  QRectF QPainter::boundingRect(const QRectF & rect, int flags, const QString & text);
// _ZN8QPainter12boundingRectERK6QRectFiRK7QString boundingRect(const class QRectF &, int, const class QString &)
extern "C"
QRectF*
C_ZN8QPainter12boundingRectERK6QRectFiRK7QString(void *qthis,
const QRectF* arg1,
int arg2,
const QString* arg3) {
  auto ret =
  ((QPainter*)qthis)->boundingRect(*((const QRectF*)arg1),
arg2,
*((const QString*)arg3));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 434, column 17>
//   // proto:  void QPainter::fillRect(int x, int y, int w, int h, const QBrush & );
// _ZN8QPainter8fillRectEiiiiRK6QBrush fillRect(int, int, int, int, const class QBrush &)
extern "C"
void
C_ZN8QPainter8fillRectEiiiiRK6QBrush(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
const QBrush* arg5) {
  ((QPainter*)qthis)->fillRect(arg1,
arg2,
arg3,
arg4,
*((const QBrush*)arg5));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 355, column 10>
//   // proto:  void QPainter::drawRoundRect(const QRectF & r, int xround, int yround);
// _ZN8QPainter13drawRoundRectERK6QRectFii drawRoundRect(const class QRectF &, int, int)
extern "C"
void
C_ZN8QPainter13drawRoundRectERK6QRectFii(void *qthis,
const QRectF* arg1,
int arg2,
int arg3) {
  ((QPainter*)qthis)->drawRoundRect(*((const QRectF*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 282, column 17>
//   // proto:  void QPainter::drawPoint(const QPoint & p);
// _ZN8QPainter9drawPointERK6QPoint drawPoint(const class QPoint &)
extern "C"
void
C_ZN8QPainter9drawPointERK6QPoint(void *qthis,
const QPoint* arg1) {
  ((QPainter*)qthis)->drawPoint(*((const QPoint*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 462, column 26>
//   // proto: static QPaintDevice * QPainter::redirected(const QPaintDevice * device, QPoint * offset);
// _ZN8QPainter10redirectedEPK12QPaintDeviceP6QPoint redirected(const class QPaintDevice *, class QPoint *)
extern "C"
void*
C_ZN8QPainter10redirectedEPK12QPaintDeviceP6QPoint(const QPaintDevice * arg1,
QPoint * arg2) {
  auto ret =
  QPainter::redirected(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 258, column 10>
//   // proto:  void QPainter::shear(qreal sh, qreal sv);
// _ZN8QPainter5shearEdd shear(qreal, qreal)
extern "C"
void
C_ZN8QPainter5shearEdd(void *qthis,
qreal arg1,
qreal arg2) {
  ((QPainter*)qthis)->shear(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 418, column 10>
//   // proto:  void QPainter::drawText(const QRect & r, int flags, const QString & text, QRect * br);
// _ZN8QPainter8drawTextERK5QRectiRK7QStringPS0_ drawText(const class QRect &, int, const class QString &, class QRect *)
extern "C"
void
C_ZN8QPainter8drawTextERK5QRectiRK7QStringPS0_(void *qthis,
const QRect* arg1,
int arg2,
const QString* arg3,
QRect * arg4) {
  ((QPainter*)qthis)->drawText(*((const QRect*)arg1),
arg2,
*((const QString*)arg3),
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 181, column 18>
//   // proto:  const QFont & QPainter::font();
// _ZNK8QPainter4fontEv font()
extern "C"
QFont*
C_ZNK8QPainter4fontEv(void *qthis) {
  auto& ret =
  ((QPainter*)qthis)->font();
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 239, column 23>
//   // proto:  const QTransform & QPainter::deviceTransform();
// _ZNK8QPainter15deviceTransformEv deviceTransform()
extern "C"
QTransform*
C_ZNK8QPainter15deviceTransformEv(void *qthis) {
  auto& ret =
  ((QPainter*)qthis)->deviceTransform();
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 450, column 17>
//   // proto:  void QPainter::eraseRect(int x, int y, int w, int h);
// _ZN8QPainter9eraseRectEiiii eraseRect(int, int, int, int)
extern "C"
void
C_ZN8QPainter9eraseRectEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QPainter*)qthis)->eraseRect(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 235, column 10>
//   // proto:  void QPainter::resetMatrix();
// _ZN8QPainter11resetMatrixEv resetMatrix()
extern "C"
void
C_ZN8QPainter11resetMatrixEv(void *qthis) {
  ((QPainter*)qthis)->resetMatrix();
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 197, column 10>
//   // proto:  void QPainter::setBackgroundMode(Qt::BGMode mode);
// _ZN8QPainter17setBackgroundModeEN2Qt6BGModeE setBackgroundMode(Qt::BGMode)
extern "C"
void
C_ZN8QPainter17setBackgroundModeEN2Qt6BGModeE(void *qthis,
Qt::BGMode* arg1) {
  ((QPainter*)qthis)->setBackgroundMode(*((Qt::BGMode*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 323, column 10>
//   // proto:  void QPainter::drawPolyline(const QPoint * points, int pointCount);
// _ZN8QPainter12drawPolylineEPK6QPointi drawPolyline(const class QPoint *, int)
extern "C"
void
C_ZN8QPainter12drawPolylineEPK6QPointi(void *qthis,
const QPoint * arg1,
int arg2) {
  ((QPainter*)qthis)->drawPolyline(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 458, column 19>
//   // proto:  QPaintEngine * QPainter::paintEngine();
// _ZNK8QPainter11paintEngineEv paintEngine()
extern "C"
void*
C_ZNK8QPainter11paintEngineEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->paintEngine();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 315, column 10>
//   // proto:  void QPainter::drawEllipse(const QRect & r);
// _ZN8QPainter11drawEllipseERK5QRect drawEllipse(const class QRect &)
extern "C"
void
C_ZN8QPainter11drawEllipseERK5QRect(void *qthis,
const QRect* arg1) {
  ((QPainter*)qthis)->drawEllipse(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 291, column 17>
//   // proto:  void QPainter::drawLine(const QLine & line);
// _ZN8QPainter8drawLineERK5QLine drawLine(const class QLine &)
extern "C"
void
C_ZN8QPainter8drawLineERK5QLine(void *qthis,
const QLine* arg1) {
  ((QPainter*)qthis)->drawLine(*((const QLine*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 130, column 10>
//   // proto:  bool QPainter::isActive();
// _ZNK8QPainter8isActiveEv isActive()
extern "C"
bool
C_ZNK8QPainter8isActiveEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->isActive();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 297, column 17>
//   // proto:  void QPainter::drawLines(const QVector<QLineF> & lines);
// _ZN8QPainter9drawLinesERK7QVectorI6QLineFE drawLines(const QVector<class QLineF> &)
extern "C"
void
C_ZN8QPainter9drawLinesERK7QVectorI6QLineFE(void *qthis,
const QVector<QLineF>* arg1) {
  ((QPainter*)qthis)->drawLines(*((const QVector<QLineF>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 336, column 10>
//   // proto:  void QPainter::drawArc(const QRectF & rect, int a, int alen);
// _ZN8QPainter7drawArcERK6QRectFii drawArc(const class QRectF &, int, int)
extern "C"
void
C_ZN8QPainter7drawArcERK6QRectFii(void *qthis,
const QRectF* arg1,
int arg2,
int arg3) {
  ((QPainter*)qthis)->drawArc(*((const QRectF*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 463, column 17>
//   // proto: static void QPainter::restoreRedirected(const QPaintDevice * device);
// _ZN8QPainter17restoreRedirectedEPK12QPaintDevice restoreRedirected(const class QPaintDevice *)
extern "C"
void
C_ZN8QPainter17restoreRedirectedEPK12QPaintDevice(const QPaintDevice * arg1) {
  QPainter::restoreRedirected(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 374, column 17>
//   // proto:  void QPainter::drawPixmap(const QPointF & p, const QPixmap & pm, const QRectF & sr);
// _ZN8QPainter10drawPixmapERK7QPointFRK7QPixmapRK6QRectF drawPixmap(const class QPointF &, const class QPixmap &, const class QRectF &)
extern "C"
void
C_ZN8QPainter10drawPixmapERK7QPointFRK7QPixmapRK6QRectF(void *qthis,
const QPointF* arg1,
const QPixmap* arg2,
const QRectF* arg3) {
  ((QPainter*)qthis)->drawPixmap(*((const QPointF*)arg1),
*((const QPixmap*)arg2),
*((const QRectF*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 326, column 10>
//   // proto:  void QPainter::drawPolygon(const QPointF * points, int pointCount, Qt::FillRule fillRule);
// _ZN8QPainter11drawPolygonEPK7QPointFiN2Qt8FillRuleE drawPolygon(const class QPointF *, int, Qt::FillRule)
extern "C"
void
C_ZN8QPainter11drawPolygonEPK7QPointFiN2Qt8FillRuleE(void *qthis,
const QPointF * arg1,
int arg2,
Qt::FillRule* arg3) {
  ((QPainter*)qthis)->drawPolygon(arg1,
arg2,
*((Qt::FillRule*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 348, column 10>
//   // proto:  void QPainter::drawRoundedRect(const QRectF & rect, qreal xRadius, qreal yRadius, Qt::SizeMode mode);
// _ZN8QPainter15drawRoundedRectERK6QRectFddN2Qt8SizeModeE drawRoundedRect(const class QRectF &, qreal, qreal, Qt::SizeMode)
extern "C"
void
C_ZN8QPainter15drawRoundedRectERK6QRectFddN2Qt8SizeModeE(void *qthis,
const QRectF* arg1,
qreal arg2,
qreal arg3,
Qt::SizeMode* arg4) {
  ((QPainter*)qthis)->drawRoundedRect(*((const QRectF*)arg1),
arg2,
arg3,
*((Qt::SizeMode*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 318, column 17>
//   // proto:  void QPainter::drawEllipse(const QPointF & center, qreal rx, qreal ry);
// _ZN8QPainter11drawEllipseERK7QPointFdd drawEllipse(const class QPointF &, qreal, qreal)
extern "C"
void
C_ZN8QPainter11drawEllipseERK7QPointFdd(void *qthis,
const QPointF* arg1,
qreal arg2,
qreal arg3) {
  ((QPainter*)qthis)->drawEllipse(*((const QPointF*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 331, column 10>
//   // proto:  void QPainter::drawConvexPolygon(const QPointF * points, int pointCount);
// _ZN8QPainter17drawConvexPolygonEPK7QPointFi drawConvexPolygon(const class QPointF *, int)
extern "C"
void
C_ZN8QPainter17drawConvexPolygonEPK7QPointFi(void *qthis,
const QPointF * arg1,
int arg2) {
  ((QPainter*)qthis)->drawConvexPolygon(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 202, column 17>
//   // proto:  void QPainter::setBrushOrigin(const QPoint & );
// _ZN8QPainter14setBrushOriginERK6QPoint setBrushOrigin(const class QPoint &)
extern "C"
void
C_ZN8QPainter14setBrushOriginERK6QPoint(void *qthis,
const QPoint* arg1) {
  ((QPainter*)qthis)->setBrushOrigin(*((const QPoint*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 421, column 10>
//   // proto:  void QPainter::drawText(const QRectF & r, const QString & text, const QTextOption & o);
// _ZN8QPainter8drawTextERK6QRectFRK7QStringRK11QTextOption drawText(const class QRectF &, const class QString &, const class QTextOption &)
extern "C"
void
C_ZN8QPainter8drawTextERK6QRectFRK7QStringRK11QTextOption(void *qthis,
const QRectF* arg1,
const QString* arg2,
const QTextOption* arg3) {
  ((QPainter*)qthis)->drawText(*((const QRectF*)arg1),
*((const QString*)arg2),
*((const QTextOption*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 255, column 10>
//   // proto:  bool QPainter::worldMatrixEnabled();
// _ZNK8QPainter18worldMatrixEnabledEv worldMatrixEnabled()
extern "C"
bool
C_ZNK8QPainter18worldMatrixEnabledEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->worldMatrixEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 377, column 17>
//   // proto:  void QPainter::drawPixmap(const QPoint & p, const QPixmap & pm);
// _ZN8QPainter10drawPixmapERK6QPointRK7QPixmap drawPixmap(const class QPoint &, const class QPixmap &)
extern "C"
void
C_ZN8QPainter10drawPixmapERK6QPointRK7QPixmap(void *qthis,
const QPoint* arg1,
const QPixmap* arg2) {
  ((QPainter*)qthis)->drawPixmap(*((const QPoint*)arg1),
*((const QPixmap*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 292, column 17>
//   // proto:  void QPainter::drawLine(int x1, int y1, int x2, int y2);
// _ZN8QPainter8drawLineEiiii drawLine(int, int, int, int)
extern "C"
void
C_ZN8QPainter8drawLineEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QPainter*)qthis)->drawLine(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 283, column 17>
//   // proto:  void QPainter::drawPoint(int x, int y);
// _ZN8QPainter9drawPointEii drawPoint(int, int)
extern "C"
void
C_ZN8QPainter9drawPointEii(void *qthis,
int arg1,
int arg2) {
  ((QPainter*)qthis)->drawPoint(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 238, column 23>
//   // proto:  const QTransform & QPainter::transform();
// _ZNK8QPainter9transformEv transform()
extern "C"
QTransform*
C_ZNK8QPainter9transformEv(void *qthis) {
  auto& ret =
  ((QPainter*)qthis)->transform();
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 460, column 17>
//   // proto: static void QPainter::setRedirected(const QPaintDevice * device, QPaintDevice * replacement, const QPoint & offset);
// _ZN8QPainter13setRedirectedEPK12QPaintDevicePS0_RK6QPoint setRedirected(const class QPaintDevice *, class QPaintDevice *, const class QPoint &)
extern "C"
void
C_ZN8QPainter13setRedirectedEPK12QPaintDevicePS0_RK6QPoint(const QPaintDevice * arg1,
QPaintDevice * arg2,
const QPoint* arg3) {
  QPainter::setRedirected(arg1,
arg2,
*((const QPoint*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 400, column 10>
//   // proto:  void QPainter::setLayoutDirection(Qt::LayoutDirection direction);
// _ZN8QPainter18setLayoutDirectionEN2Qt15LayoutDirectionE setLayoutDirection(Qt::LayoutDirection)
extern "C"
void
C_ZN8QPainter18setLayoutDirectionEN2Qt15LayoutDirectionE(void *qthis,
Qt::LayoutDirection* arg1) {
  ((QPainter*)qthis)->setLayoutDirection(*((Qt::LayoutDirection*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 369, column 17>
//   // proto:  void QPainter::drawPixmap(const QRect & targetRect, const QPixmap & pixmap, const QRect & sourceRect);
// _ZN8QPainter10drawPixmapERK5QRectRK7QPixmapS2_ drawPixmap(const class QRect &, const class QPixmap &, const class QRect &)
extern "C"
void
C_ZN8QPainter10drawPixmapERK5QRectRK7QPixmapS2_(void *qthis,
const QRect* arg1,
const QPixmap* arg2,
const QRect* arg3) {
  ((QPainter*)qthis)->drawPixmap(*((const QRect*)arg1),
*((const QPixmap*)arg2),
*((const QRect*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 184, column 18>
//   // proto:  QFontMetrics QPainter::fontMetrics();
// _ZNK8QPainter11fontMetricsEv fontMetrics()
extern "C"
QFontMetrics*
C_ZNK8QPainter11fontMetricsEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->fontMetrics();
  return new QFontMetrics(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 303, column 17>
//   // proto:  void QPainter::drawLines(const QVector<QPoint> & pointPairs);
// _ZN8QPainter9drawLinesERK7QVectorI6QPointE drawLines(const QVector<class QPoint> &)
extern "C"
void
C_ZN8QPainter9drawLinesERK7QVectorI6QPointE(void *qthis,
const QVector<QPoint>* arg1) {
  ((QPainter*)qthis)->drawLines(*((const QVector<QPoint>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 329, column 17>
//   // proto:  void QPainter::drawPolygon(const QPolygon & polygon, Qt::FillRule fillRule);
// _ZN8QPainter11drawPolygonERK8QPolygonN2Qt8FillRuleE drawPolygon(const class QPolygon &, Qt::FillRule)
extern "C"
void
C_ZN8QPainter11drawPolygonERK8QPolygonN2Qt8FillRuleE(void *qthis,
const QPolygon* arg1,
Qt::FillRule* arg2) {
  ((QPainter*)qthis)->drawPolygon(*((const QPolygon*)arg1),
*((Qt::FillRule*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 299, column 17>
//   // proto:  void QPainter::drawLines(const QVector<QPointF> & pointPairs);
// _ZN8QPainter9drawLinesERK7QVectorI7QPointFE drawLines(const QVector<class QPointF> &)
extern "C"
void
C_ZN8QPainter9drawLinesERK7QVectorI7QPointFE(void *qthis,
const QVector<QPointF>* arg1) {
  ((QPainter*)qthis)->drawLines(*((const QVector<QPointF>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 216, column 10>
//   // proto:  void QPainter::setClipRect(const QRect & , Qt::ClipOperation op);
// _ZN8QPainter11setClipRectERK5QRectN2Qt13ClipOperationE setClipRect(const class QRect &, Qt::ClipOperation)
extern "C"
void
C_ZN8QPainter11setClipRectERK5QRectN2Qt13ClipOperationE(void *qthis,
const QRect* arg1,
Qt::ClipOperation* arg2) {
  ((QPainter*)qthis)->setClipRect(*((const QRect*)arg1),
*((Qt::ClipOperation*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 404, column 10>
//   // proto:  void QPainter::drawGlyphRun(const QPointF & position, const QGlyphRun & glyphRun);
// _ZN8QPainter12drawGlyphRunERK7QPointFRK9QGlyphRun drawGlyphRun(const class QPointF &, const class QGlyphRun &)
extern "C"
void
C_ZN8QPainter12drawGlyphRunERK7QPointFRK9QGlyphRun(void *qthis,
const QPointF* arg1,
const QGlyphRun* arg2) {
  ((QPainter*)qthis)->drawGlyphRun(*((const QPointF*)arg1),
*((const QGlyphRun*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 433, column 10>
//   // proto:  void QPainter::fillRect(const QRectF & , const QBrush & );
// _ZN8QPainter8fillRectERK6QRectFRK6QBrush fillRect(const class QRectF &, const class QBrush &)
extern "C"
void
C_ZN8QPainter8fillRectERK6QRectFRK6QBrush(void *qthis,
const QRectF* arg1,
const QBrush* arg2) {
  ((QPainter*)qthis)->fillRect(*((const QRectF*)arg1),
*((const QBrush*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 240, column 10>
//   // proto:  void QPainter::resetTransform();
// _ZN8QPainter14resetTransformEv resetTransform()
extern "C"
void
C_ZN8QPainter14resetTransformEv(void *qthis) {
  ((QPainter*)qthis)->resetTransform();
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 435, column 10>
//   // proto:  void QPainter::fillRect(const QRect & , const QBrush & );
// _ZN8QPainter8fillRectERK5QRectRK6QBrush fillRect(const class QRect &, const class QBrush &)
extern "C"
void
C_ZN8QPainter8fillRectERK5QRectRK6QBrush(void *qthis,
const QRect* arg1,
const QBrush* arg2) {
  ((QPainter*)qthis)->fillRect(*((const QRect*)arg1),
*((const QBrush*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 194, column 19>
//   // proto:  const QBrush & QPainter::brush();
// _ZNK8QPainter5brushEv brush()
extern "C"
QBrush*
C_ZNK8QPainter5brushEv(void *qthis) {
  auto& ret =
  ((QPainter*)qthis)->brush();
  return new QBrush(ret); // 5
}
//   // proto:  void QPainter::~QPainter();
extern "C"
void C_ZN8QPainterD2Ev(void *qthis) {
  delete (QPainter*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 128, column 10>
//   // proto:  bool QPainter::begin(QPaintDevice * );
// _ZN8QPainter5beginEP12QPaintDevice begin(class QPaintDevice *)
extern "C"
bool
C_ZN8QPainter5beginEP12QPaintDevice(void *qthis,
QPaintDevice * arg1) {
  auto ret =
  ((QPainter*)qthis)->begin(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 307, column 17>
//   // proto:  void QPainter::drawRect(const QRect & rect);
// _ZN8QPainter8drawRectERK5QRect drawRect(const class QRect &)
extern "C"
void
C_ZN8QPainter8drawRectERK5QRect(void *qthis,
const QRect* arg1) {
  ((QPainter*)qthis)->drawRect(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 217, column 17>
//   // proto:  void QPainter::setClipRect(int x, int y, int w, int h, Qt::ClipOperation op);
// _ZN8QPainter11setClipRectEiiiiN2Qt13ClipOperationE setClipRect(int, int, int, int, Qt::ClipOperation)
extern "C"
void
C_ZN8QPainter11setClipRectEiiiiN2Qt13ClipOperationE(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
Qt::ClipOperation* arg5) {
  ((QPainter*)qthis)->setClipRect(arg1,
arg2,
arg3,
arg4,
*((Qt::ClipOperation*)arg5));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 429, column 10>
//   // proto:  void QPainter::drawTextItem(const QPointF & p, const QTextItem & ti);
// _ZN8QPainter12drawTextItemERK7QPointFRK9QTextItem drawTextItem(const class QPointF &, const class QTextItem &)
extern "C"
void
C_ZN8QPainter12drawTextItemERK7QPointFRK9QTextItem(void *qthis,
const QPointF* arg1,
const QTextItem* arg2) {
  ((QPainter*)qthis)->drawTextItem(*((const QPointF*)arg1),
*((const QTextItem*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 455, column 17>
//   // proto:  RenderHints QPainter::renderHints();
// _ZNK8QPainter11renderHintsEv renderHints()
extern "C"
QFlags<QPainter::RenderHint>*
C_ZNK8QPainter11renderHintsEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->renderHints();
  return new QFlags<QPainter::RenderHint>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 257, column 10>
//   // proto:  void QPainter::scale(qreal sx, qreal sy);
// _ZN8QPainter5scaleEdd scale(qreal, qreal)
extern "C"
void
C_ZN8QPainter5scaleEdd(void *qthis,
qreal arg1,
qreal arg2) {
  ((QPainter*)qthis)->scale(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 350, column 17>
//   // proto:  void QPainter::drawRoundedRect(int x, int y, int w, int h, qreal xRadius, qreal yRadius, Qt::SizeMode mode);
// _ZN8QPainter15drawRoundedRectEiiiiddN2Qt8SizeModeE drawRoundedRect(int, int, int, int, qreal, qreal, Qt::SizeMode)
extern "C"
void
C_ZN8QPainter15drawRoundedRectEiiiiddN2Qt8SizeModeE(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
qreal arg5,
qreal arg6,
Qt::SizeMode* arg7) {
  ((QPainter*)qthis)->drawRoundedRect(arg1,
arg2,
arg3,
arg4,
arg5,
arg6,
*((Qt::SizeMode*)arg7));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 178, column 10>
//   // proto:  void QPainter::setCompositionMode(QPainter::CompositionMode mode);
// _ZN8QPainter18setCompositionModeENS_15CompositionModeE setCompositionMode(enum QPainter::CompositionMode)
extern "C"
void
C_ZN8QPainter18setCompositionModeENS_15CompositionModeE(void *qthis,
QPainter::CompositionMode arg1) {
  ((QPainter*)qthis)->setCompositionMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 242, column 10>
//   // proto:  void QPainter::setWorldMatrix(const QMatrix & matrix, bool combine);
// _ZN8QPainter14setWorldMatrixERK7QMatrixb setWorldMatrix(const class QMatrix &, _Bool)
extern "C"
void
C_ZN8QPainter14setWorldMatrixERK7QMatrixb(void *qthis,
const QMatrix* arg1,
bool arg2) {
  ((QPainter*)qthis)->setWorldMatrix(*((const QMatrix*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 213, column 18>
//   // proto:  QPainterPath QPainter::clipPath();
// _ZNK8QPainter8clipPathEv clipPath()
extern "C"
QPainterPath*
C_ZNK8QPainter8clipPathEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->clipPath();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 200, column 12>
//   // proto:  QPoint QPainter::brushOrigin();
// _ZNK8QPainter11brushOriginEv brushOrigin()
extern "C"
QPoint*
C_ZNK8QPainter11brushOriginEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->brushOrigin();
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 332, column 17>
//   // proto:  void QPainter::drawConvexPolygon(const QPolygonF & polygon);
// _ZN8QPainter17drawConvexPolygonERK9QPolygonF drawConvexPolygon(const class QPolygonF &)
extern "C"
void
C_ZN8QPainter17drawConvexPolygonERK9QPolygonF(void *qthis,
const QPolygonF* arg1) {
  ((QPainter*)qthis)->drawConvexPolygon(*((const QPolygonF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 316, column 17>
//   // proto:  void QPainter::drawEllipse(int x, int y, int w, int h);
// _ZN8QPainter11drawEllipseEiiii drawEllipse(int, int, int, int)
extern "C"
void
C_ZN8QPainter11drawEllipseEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QPainter*)qthis)->drawEllipse(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 334, column 17>
//   // proto:  void QPainter::drawConvexPolygon(const QPolygon & polygon);
// _ZN8QPainter17drawConvexPolygonERK8QPolygon drawConvexPolygon(const class QPolygon &)
extern "C"
void
C_ZN8QPainter17drawConvexPolygonERK8QPolygon(void *qthis,
const QPolygon* arg1) {
  ((QPainter*)qthis)->drawConvexPolygon(*((const QPolygon*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 287, column 10>
//   // proto:  void QPainter::drawPoints(const QPoint * points, int pointCount);
// _ZN8QPainter10drawPointsEPK6QPointi drawPoints(const class QPoint *, int)
extern "C"
void
C_ZN8QPainter10drawPointsEPK6QPointi(void *qthis,
const QPoint * arg1,
int arg2) {
  ((QPainter*)qthis)->drawPoints(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 206, column 19>
//   // proto:  const QBrush & QPainter::background();
// _ZNK8QPainter10backgroundEv background()
extern "C"
QBrush*
C_ZNK8QPainter10backgroundEv(void *qthis) {
  auto& ret =
  ((QPainter*)qthis)->background();
  return new QBrush(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 356, column 17>
//   // proto:  void QPainter::drawRoundRect(int x, int y, int w, int h, int , int );
// _ZN8QPainter13drawRoundRectEiiiiii drawRoundRect(int, int, int, int, int, int)
extern "C"
void
C_ZN8QPainter13drawRoundRectEiiiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
int arg5,
int arg6) {
  ((QPainter*)qthis)->drawRoundRect(arg1,
arg2,
arg3,
arg4,
arg5,
arg6);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 269, column 11>
//   // proto:  QRect QPainter::viewport();
// _ZNK8QPainter8viewportEv viewport()
extern "C"
QRect*
C_ZNK8QPainter8viewportEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->viewport();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 337, column 17>
//   // proto:  void QPainter::drawArc(const QRect & , int a, int alen);
// _ZN8QPainter7drawArcERK5QRectii drawArc(const class QRect &, int, int)
extern "C"
void
C_ZN8QPainter7drawArcERK5QRectii(void *qthis,
const QRect* arg1,
int arg2,
int arg3) {
  ((QPainter*)qthis)->drawArc(*((const QRect*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 278, column 10>
//   // proto:  void QPainter::fillPath(const QPainterPath & path, const QBrush & brush);
// _ZN8QPainter8fillPathERK12QPainterPathRK6QBrush fillPath(const class QPainterPath &, const class QBrush &)
extern "C"
void
C_ZN8QPainter8fillPathERK12QPainterPathRK6QBrush(void *qthis,
const QPainterPath* arg1,
const QBrush* arg2) {
  ((QPainter*)qthis)->fillPath(*((const QPainterPath*)arg1),
*((const QBrush*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 419, column 17>
//   // proto:  void QPainter::drawText(int x, int y, int w, int h, int flags, const QString & text, QRect * br);
// _ZN8QPainter8drawTextEiiiiiRK7QStringP5QRect drawText(int, int, int, int, int, const class QString &, class QRect *)
extern "C"
void
C_ZN8QPainter8drawTextEiiiiiRK7QStringP5QRect(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
int arg5,
const QString* arg6,
QRect * arg7) {
  ((QPainter*)qthis)->drawText(arg1,
arg2,
arg3,
arg4,
arg5,
*((const QString*)arg6),
arg7);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 454, column 10>
//   // proto:  void QPainter::setRenderHints(RenderHints hints, bool on);
// _ZN8QPainter14setRenderHintsE6QFlagsINS_10RenderHintEEb setRenderHints(RenderHints, _Bool)
extern "C"
void
C_ZN8QPainter14setRenderHintsE6QFlagsINS_10RenderHintEEb(void *qthis,
QPainter::RenderHints arg1,
bool arg2) {
  ((QPainter*)qthis)->setRenderHints(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 215, column 10>
//   // proto:  void QPainter::setClipRect(const QRectF & , Qt::ClipOperation op);
// _ZN8QPainter11setClipRectERK6QRectFN2Qt13ClipOperationE setClipRect(const class QRectF &, Qt::ClipOperation)
extern "C"
void
C_ZN8QPainter11setClipRectERK6QRectFN2Qt13ClipOperationE(void *qthis,
const QRectF* arg1,
Qt::ClipOperation* arg2) {
  ((QPainter*)qthis)->setClipRect(*((const QRectF*)arg1),
*((Qt::ClipOperation*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 252, column 10>
//   // proto:  bool QPainter::matrixEnabled();
// _ZNK8QPainter13matrixEnabledEv matrixEnabled()
extern "C"
bool
C_ZNK8QPainter13matrixEnabledEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->matrixEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 321, column 10>
//   // proto:  void QPainter::drawPolyline(const QPointF * points, int pointCount);
// _ZN8QPainter12drawPolylineEPK7QPointFi drawPolyline(const class QPointF *, int)
extern "C"
void
C_ZN8QPainter12drawPolylineEPK7QPointFi(void *qthis,
const QPointF * arg1,
int arg2) {
  ((QPainter*)qthis)->drawPolyline(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 237, column 10>
//   // proto:  void QPainter::setTransform(const QTransform & transform, bool combine);
// _ZN8QPainter12setTransformERK10QTransformb setTransform(const class QTransform &, _Bool)
extern "C"
void
C_ZN8QPainter12setTransformERK10QTransformb(void *qthis,
const QTransform* arg1,
bool arg2) {
  ((QPainter*)qthis)->setTransform(*((const QTransform*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 187, column 10>
//   // proto:  void QPainter::setPen(const QColor & color);
// _ZN8QPainter6setPenERK6QColor setPen(const class QColor &)
extern "C"
void
C_ZN8QPainter6setPenERK6QColor(void *qthis,
const QColor* arg1) {
  ((QPainter*)qthis)->setPen(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 451, column 17>
//   // proto:  void QPainter::eraseRect(const QRect & );
// _ZN8QPainter9eraseRectERK5QRect eraseRect(const class QRect &)
extern "C"
void
C_ZN8QPainter9eraseRectERK5QRect(void *qthis,
const QRect* arg1) {
  ((QPainter*)qthis)->eraseRect(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 265, column 11>
//   // proto:  QRect QPainter::window();
// _ZNK8QPainter6windowEv window()
extern "C"
QRect*
C_ZNK8QPainter6windowEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->window();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 394, column 17>
//   // proto:  void QPainter::drawImage(const QRect & r, const QImage & image);
// _ZN8QPainter9drawImageERK5QRectRK6QImage drawImage(const class QRect &, const class QImage &)
extern "C"
void
C_ZN8QPainter9drawImageERK5QRectRK6QImage(void *qthis,
const QRect* arg1,
const QImage* arg2) {
  ((QPainter*)qthis)->drawImage(*((const QRect*)arg1),
*((const QImage*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 446, column 17>
//   // proto:  void QPainter::fillRect(const QRect & r, Qt::BrushStyle style);
// _ZN8QPainter8fillRectERK5QRectN2Qt10BrushStyleE fillRect(const class QRect &, Qt::BrushStyle)
extern "C"
void
C_ZN8QPainter8fillRectERK5QRectN2Qt10BrushStyleE(void *qthis,
const QRect* arg1,
Qt::BrushStyle* arg2) {
  ((QPainter*)qthis)->fillRect(*((const QRect*)arg1),
*((Qt::BrushStyle*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 132, column 10>
//   // proto:  void QPainter::initFrom(const QPaintDevice * device);
// _ZN8QPainter8initFromEPK12QPaintDevice initFrom(const class QPaintDevice *)
extern "C"
void
C_ZN8QPainter8initFromEPK12QPaintDevice(void *qthis,
const QPaintDevice * arg1) {
  ((QPainter*)qthis)->initFrom(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 185, column 15>
//   // proto:  QFontInfo QPainter::fontInfo();
// _ZNK8QPainter8fontInfoEv fontInfo()
extern "C"
QFontInfo*
C_ZNK8QPainter8fontInfoEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->fontInfo();
  return new QFontInfo(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 466, column 10>
//   // proto:  void QPainter::endNativePainting();
// _ZN8QPainter17endNativePaintingEv endNativePainting()
extern "C"
void
C_ZN8QPainter17endNativePaintingEv(void *qthis) {
  ((QPainter*)qthis)->endNativePainting();
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 273, column 10>
//   // proto:  void QPainter::setViewTransformEnabled(bool enable);
// _ZN8QPainter23setViewTransformEnabledEb setViewTransformEnabled(_Bool)
extern "C"
void
C_ZN8QPainter23setViewTransformEnabledEb(void *qthis,
bool arg1) {
  ((QPainter*)qthis)->setViewTransformEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 281, column 17>
//   // proto:  void QPainter::drawPoint(const QPointF & pt);
// _ZN8QPainter9drawPointERK7QPointF drawPoint(const class QPointF &)
extern "C"
void
C_ZN8QPainter9drawPointERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QPainter*)qthis)->drawPoint(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 209, column 10>
//   // proto:  void QPainter::setOpacity(qreal opacity);
// _ZN8QPainter10setOpacityEd setOpacity(qreal)
extern "C"
void
C_ZN8QPainter10setOpacityEd(void *qthis,
qreal arg1) {
  ((QPainter*)qthis)->setOpacity(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 327, column 17>
//   // proto:  void QPainter::drawPolygon(const QPolygonF & polygon, Qt::FillRule fillRule);
// _ZN8QPainter11drawPolygonERK9QPolygonFN2Qt8FillRuleE drawPolygon(const class QPolygonF &, Qt::FillRule)
extern "C"
void
C_ZN8QPainter11drawPolygonERK9QPolygonFN2Qt8FillRuleE(void *qthis,
const QPolygonF* arg1,
Qt::FillRule* arg2) {
  ((QPainter*)qthis)->drawPolygon(*((const QPolygonF*)arg1),
*((Qt::FillRule*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 437, column 10>
//   // proto:  void QPainter::fillRect(const QRectF & , const QColor & color);
// _ZN8QPainter8fillRectERK6QRectFRK6QColor fillRect(const class QRectF &, const class QColor &)
extern "C"
void
C_ZN8QPainter8fillRectERK6QRectFRK6QColor(void *qthis,
const QRectF* arg1,
const QColor* arg2) {
  ((QPainter*)qthis)->fillRect(*((const QRectF*)arg1),
*((const QColor*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 122, column 5>
//   // proto:  void QPainter::QPainter();
extern "C"
QPainter*
C_ZN8QPainterC2Ev() {
  auto ret = new QPainter();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 261, column 10>
//   // proto:  void QPainter::translate(const QPointF & offset);
// _ZN8QPainter9translateERK7QPointF translate(const class QPointF &)
extern "C"
void
C_ZN8QPainter9translateERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QPainter*)qthis)->translate(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 411, column 10>
//   // proto:  void QPainter::drawText(const QPointF & p, const QString & s);
// _ZN8QPainter8drawTextERK7QPointFRK7QString drawText(const class QPointF &, const class QString &)
extern "C"
void
C_ZN8QPainter8drawTextERK7QPointFRK7QString(void *qthis,
const QPointF* arg1,
const QString* arg2) {
  ((QPainter*)qthis)->drawText(*((const QPointF*)arg1),
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 193, column 10>
//   // proto:  void QPainter::setBrush(Qt::BrushStyle style);
// _ZN8QPainter8setBrushEN2Qt10BrushStyleE setBrush(Qt::BrushStyle)
extern "C"
void
C_ZN8QPainter8setBrushEN2Qt10BrushStyleE(void *qthis,
Qt::BrushStyle* arg1) {
  ((QPainter*)qthis)->setBrush(*((Qt::BrushStyle*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 395, column 10>
//   // proto:  void QPainter::drawImage(const QPointF & p, const QImage & image);
// _ZN8QPainter9drawImageERK7QPointFRK6QImage drawImage(const class QPointF &, const class QImage &)
extern "C"
void
C_ZN8QPainter9drawImageERK7QPointFRK6QImage(void *qthis,
const QPointF* arg1,
const QImage* arg2) {
  ((QPainter*)qthis)->drawImage(*((const QPointF*)arg1),
*((const QImage*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 190, column 17>
//   // proto:  const QPen & QPainter::pen();
// _ZNK8QPainter3penEv pen()
extern "C"
QPen*
C_ZNK8QPainter3penEv(void *qthis) {
  auto& ret =
  ((QPainter*)qthis)->pen();
  return new QPen(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 259, column 10>
//   // proto:  void QPainter::rotate(qreal a);
// _ZN8QPainter6rotateEd rotate(qreal)
extern "C"
void
C_ZN8QPainter6rotateEd(void *qthis,
qreal arg1) {
  ((QPainter*)qthis)->rotate(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 226, column 12>
//   // proto:  QRectF QPainter::clipBoundingRect();
// _ZNK8QPainter16clipBoundingRectEv clipBoundingRect()
extern "C"
QRectF*
C_ZNK8QPainter16clipBoundingRectEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->clipBoundingRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 293, column 17>
//   // proto:  void QPainter::drawLine(const QPoint & p1, const QPoint & p2);
// _ZN8QPainter8drawLineERK6QPointS2_ drawLine(const class QPoint &, const class QPoint &)
extern "C"
void
C_ZN8QPainter8drawLineERK6QPointS2_(void *qthis,
const QPoint* arg1,
const QPoint* arg2) {
  ((QPainter*)qthis)->drawLine(*((const QPoint*)arg1),
*((const QPoint*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 385, column 10>
//   // proto:  void QPainter::drawImage(const QRectF & targetRect, const QImage & image, const QRectF & sourceRect, Qt::ImageConversionFlags flags);
// _ZN8QPainter9drawImageERK6QRectFRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE drawImage(const class QRectF &, const class QImage &, const class QRectF &, Qt::ImageConversionFlags)
extern "C"
void
C_ZN8QPainter9drawImageERK6QRectFRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE(void *qthis,
const QRectF* arg1,
const QImage* arg2,
const QRectF* arg3,
Qt::ImageConversionFlags* arg4) {
  ((QPainter*)qthis)->drawImage(*((const QRectF*)arg1),
*((const QImage*)arg2),
*((const QRectF*)arg3),
*((Qt::ImageConversionFlags*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 340, column 10>
//   // proto:  void QPainter::drawPie(const QRectF & rect, int a, int alen);
// _ZN8QPainter7drawPieERK6QRectFii drawPie(const class QRectF &, int, int)
extern "C"
void
C_ZN8QPainter7drawPieERK6QRectFii(void *qthis,
const QRectF* arg1,
int arg2,
int arg3) {
  ((QPainter*)qthis)->drawPie(*((const QRectF*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 412, column 17>
//   // proto:  void QPainter::drawText(const QPoint & p, const QString & s);
// _ZN8QPainter8drawTextERK6QPointRK7QString drawText(const class QPoint &, const class QString &)
extern "C"
void
C_ZN8QPainter8drawTextERK6QPointRK7QString(void *qthis,
const QPoint* arg1,
const QString* arg2) {
  ((QPainter*)qthis)->drawText(*((const QPoint*)arg1),
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 179, column 21>
//   // proto:  QPainter::CompositionMode QPainter::compositionMode();
// _ZNK8QPainter15compositionModeEv compositionMode()
extern "C"
QPainter::CompositionMode
C_ZNK8QPainter15compositionModeEv(void *qthis) {
  auto ret =
  ((QPainter*)qthis)->compositionMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 267, column 17>
//   // proto:  void QPainter::setWindow(int x, int y, int w, int h);
// _ZN8QPainter9setWindowEiiii setWindow(int, int, int, int)
extern "C"
void
C_ZN8QPainter9setWindowEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QPainter*)qthis)->setWindow(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpainter.h', line 465, column 10>
//   // proto:  void QPainter::beginNativePainting();
// _ZN8QPainter19beginNativePaintingEv beginNativePainting()
extern "C"
void
C_ZN8QPainter19beginNativePaintingEv(void *qthis) {
  ((QPainter*)qthis)->beginNativePainting();
}
// <= ext block end

// body block begin =>
// <= body block end

