#ifndef PRINTER_H
#define PRINTER_H
#include <QWidget>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QtGui>
class QPrinter;
class QPaintDevice;
// ======================================================================
class Printer : public QWidget {
Q_OBJECT

private:
    QPrinter* m_pprinter;
protected:
    virtual void paintEvent(QPaintEvent* pe );
    void draw (QPaintDevice* ppd);
public:
    Printer(QWidget* pwgt = 0);
    virtual ~Printer();
public slots:
    void slotPrint();
};

#endif // PRINTER_H
