#include "UIController.h"

UIController::UIController()
{

}

void UIController::updateSongInfo(const Song &song)
{

}

void UIController::updateProgress(int position)
{

}

void UIController::updatPlayPause(bool inPlaying)
{

}

void UIController::updateVolume(int volume)
{

}

void UIController::onFilePathReceived(QString value)
{
     qDebug() << "Received value:" << value;
}
