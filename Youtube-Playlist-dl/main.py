# "pytube" official doc: https://github.com/pytube/pytube

# Author:   Staler2019
# Date:     2/20/2022

from pytube import YouTube, Playlist
from pytube.exceptions import *

import multiprocessing as mp
import os

OUTPUT_PATH = "D:/Music/Youtube-Playlist-dl/"
MULTI_PROCESSING_NUMBER = 4


def process(video_url):  # video: str
    try:
        yt = YouTube(video_url)
    except VideoUnavailable:
        print(
            f"Video {video_url} is unavaialable, skipping."
        )
    else:
        print(f"Downloading: {yt.title}")
        stream = yt.streams.get_audio_only()
        # print(yt.captions)
        filename = stream.download(
            skip_existing=False,
            output_path=OUTPUT_PATH,
            # filename=f"{yt.title}.mp3",
        )
        os.renames(filename, f"{filename[:-1]}3")


def main():
    url = input(
        "For downloading the mp3, please input url: "
    )

    # url = "https://www.youtube.com/watch?v=RAVdUBcU70s&ab_channel=SKRpresents%E9%99%B6%E5%B1%B1%E9%9F%B3%E6%A8%82"
    # url = "https://www.youtube.com/watch?v=ucilRHmNoEs&ab_channel=%E5%9C%A8%E5%9C%B0%E4%B8%8A%E6%BB%BE%E7%9A%84%E5%B7%A5%E7%A8%8B%E5%B8%ABNic"

    if "youtube.com" not in url:
        print("This is not a YouTube url")
        return

    if "list" in url:  # playlist
        playlist = Playlist(url)
        pool = mp.Semaphore(4)
        mp_list = []

        with mp.Pool(
            processes=MULTI_PROCESSING_NUMBER
        ) as pool:
            pool.map(process, playlist.video_urls)

    else:  # video link
        process(url)


if __name__ == "__main__":
    main()
