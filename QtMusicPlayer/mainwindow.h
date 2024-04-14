#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "playlist.h"
#include <QtMultimedia/QMediaPlayer>
#include <QAudioOutput>
#include <QMediaPlayer>
#include "QTimer"
#include "QPalette"
#include "vector"
#include "QKeyEvent"
#include "QLineEdit"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_play_clicked();
    void on_add_clicked();
    void on_remove_clicked();
    void on_save_clicked();
    void on_repeat_clicked();
    void on_forward_clicked();
    void on_back_clicked();
    void on_shuffle_clicked();
    void on_mute_clicked();
    void on_seekBar_sliderMoved(int position);
    void on_volumeBar_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    void updateList();
    int getIndex();
    void loadTrack();
    void shufflePlaylist();//lecture aléatoire
    void next();
    void back();
    void keyPressEvent(QKeyEvent *event);


    //les gros objets privés sont ici
    Playlist playlist;
    bool repeat = false;
    bool muted = false;
    bool shuffle = false;
    int lCounter = 0;
    QTimer *updater = new QTimer(this);
    QMediaPlayer *player = new QMediaPlayer;// Initialise le QMediaPlayer
    QAudioOutput* audioOutput = new QAudioOutput; //= new QAudioOutput(this);//Initialise l'audio Output
    vector<unsigned short int> shuffledPlaylist;





};
#endif // MAINWINDOW_H

/*
*fonctionnement des signaux et des slots
*connect(emitter, &EmitterClass::signalName, receiver, &ReceiverClass::slotName);
// Dans le constructeur de MainWindow ou une méthode d'initialisation
connect(ui->myButton, &QPushButton::on_clicked, this, &MainWindow::handleButtonClicked);

*/
