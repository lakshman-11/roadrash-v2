#include "audio.h"

Audio::Audio(int maxSoundCount = 100) :maxSoundCount(maxSoundCount)
{
	sounds = new sf::Sound[maxSoundCount];
}

Audio::~Audio()
{
	delete[] sounds;
}


void Audio::load(AudioID id, std::string path)
{
	sf::SoundBuffer buffer;
	buffer.loadFromFile(path.c_str());
	soundBuffers.insert(std::make_pair(id, std::move(buffer)));

}


void Audio::loadBgMusic(std::string path) {
	bgMusic.openFromFile(path.c_str());
	bgMusic.setLoop(true);
	if (playBgMusic) bgMusic.play();
}

//void Audio::loadMenu()
//{
//	bgMusic.openFromFile("Assets/Audio/music.ogg");
//	bgMusic.setLoop(true);
//	bgMusic.setVolume(5.0f);
//	if (playBgMusic) bgMusic.play();
//
//	soundBuffers.load(SoundEffect::Select, "Assets/Audio/select.wav");
//}

sf::Sound& Audio::playSound(AudioID id)
{
	if (soundCount >= maxSoundCount)
		soundCount = 0;
	sounds[soundCount].setBuffer(soundBuffers[id]);
	sounds[soundCount].play();
	sounds[soundCount].setVolume(volume);
	return sounds[soundCount++];
}

void Audio::setBgMusicStatus(bool _playBgMusic)
{
	playBgMusic = _playBgMusic;
}