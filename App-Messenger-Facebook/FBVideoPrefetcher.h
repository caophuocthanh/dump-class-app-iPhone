//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBVideoPrefetcher : NSObject
{
}

+ (void)prefetchAlways:(id)arg1 session:(id)arg2 useQueue:(BOOL)arg3 definition:(int)arg4;
+ (void)prefetchIfAllowed:(id)arg1 session:(id)arg2 shouldAutoPlay:(BOOL)arg3 useQueue:(BOOL)arg4 definition:(int)arg5;
+ (int)_sizeFromSeconds:(long)arg1 atomSize:(int)arg2 bitRate:(int)arg3 defaultSize:(int)arg4;
+ (void)prefetchAlways:(id)arg1 SDPlaybackURL:(id)arg2 sdBitRate:(int)arg3 sdAtomSize:(int)arg4 session:(id)arg5 useQueue:(BOOL)arg6 definition:(int)arg7;
+ (void)prefetchIfAllowed:(id)arg1 SDPlaybackURL:(id)arg2 HDPlaybackURL:(id)arg3 sdBitRate:(int)arg4 sdAtomSize:(int)arg5 hdBitRate:(int)arg6 hdAtomSize:(int)arg7 session:(id)arg8 shouldAutoPlay:(BOOL)arg9 useQueue:(BOOL)arg10 definition:(int)arg11;
+ (void)_loadHLS:(id)arg1 bytes:(unsigned int)arg2 SDPlaylist:(id)arg3 session:(id)arg4 useQueue:(BOOL)arg5;
+ (void)prefetchAlwaysHLS:(id)arg1 SDPlaylist:(id)arg2 prefetchedBytesWifi:(unsigned int)arg3 session:(id)arg4 useQueue:(BOOL)arg5 definition:(int)arg6;
+ (void)prefetchHLSIfAllowed:(id)arg1 HLSPlaybackURL:(id)arg2 SDPlaylist:(id)arg3 prefetchedBytesWifi:(unsigned int)arg4 prefetchedBytesCell:(unsigned int)arg5 session:(id)arg6 useQueue:(BOOL)arg7 definition:(int)arg8;
- (id)init;

@end
