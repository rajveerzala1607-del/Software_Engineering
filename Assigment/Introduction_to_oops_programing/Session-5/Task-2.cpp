#include<iostream>
using namespace std;

class SocialMediaUploader {
public:
    virtual void uploadContent() {
        cout << "Uploading content..." << endl;
    }
};

class InstagramUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        cout << "Uploading photo/reel to Instagram." << endl;
    }
};

class YouTubeUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        cout << "Uploading video to YouTube." << endl;
    }
};

int main() {
    InstagramUploader insta;
    YouTubeUploader yt;

    insta.uploadContent();
    yt.uploadContent();

    return 0;
}
