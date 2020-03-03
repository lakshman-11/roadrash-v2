#pragma once
#include <SFML/Audio.hpp>
#include <map>
#include <string>

enum AudioID {
	Engine,
};

class Audio
{
private:


	Audio& operator=(Audio) = delete;
	Audio(Audio&) = delete;

	bool playBgMusic = true;
	sf::Music bgMusic;
	std::map<AudioID, sf::SoundBuffer> soundBuffers;
	sf::Sound* sounds;
	int soundCount = 0;
	int maxSoundCount = 100;
	float volume = 5.f;

public:
	

	//Create a audio object wherever needed
	Audio(int);
	~Audio();

	void load(AudioID, std::string);
	void loadBgMusic(std::string);
	void setBgMusicStatus(bool);
	sf::Sound& playSound(AudioID);
};
