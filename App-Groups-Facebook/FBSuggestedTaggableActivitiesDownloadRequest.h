//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLDownloadRequest.h"

@class NSDate, NSNumber, NSString;

@interface FBSuggestedTaggableActivitiesDownloadRequest : FBGraphQLDownloadRequest
{
    NSString *_currentSongTitle;
    NSString *_currentSongArtist;
    NSString *_currentSongAlbum;
    NSDate *_currentSongReleaseDate;
    NSString *_currentSongGenre;
    NSString *_audioFingerprint;
    NSNumber *_fingerprintSegmentOffset;
    NSNumber *_fingerprintSegmentLength;
    NSString *_sessionToken;
    NSNumber *_version;
}

@property(copy, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(copy, nonatomic) NSNumber *fingerprintSegmentLength; // @synthesize fingerprintSegmentLength=_fingerprintSegmentLength;
@property(copy, nonatomic) NSNumber *fingerprintSegmentOffset; // @synthesize fingerprintSegmentOffset=_fingerprintSegmentOffset;
@property(copy, nonatomic) NSString *audioFingerprint; // @synthesize audioFingerprint=_audioFingerprint;
@property(copy, nonatomic) NSString *currentSongGenre; // @synthesize currentSongGenre=_currentSongGenre;
@property(copy, nonatomic) NSDate *currentSongReleaseDate; // @synthesize currentSongReleaseDate=_currentSongReleaseDate;
@property(copy, nonatomic) NSString *currentSongAlbum; // @synthesize currentSongAlbum=_currentSongAlbum;
@property(copy, nonatomic) NSString *currentSongArtist; // @synthesize currentSongArtist=_currentSongArtist;
@property(copy, nonatomic) NSString *currentSongTitle; // @synthesize currentSongTitle=_currentSongTitle;
- (void).cxx_destruct;
- (id)newQuery;
- (id)initWithCallbackPerformer:(id)arg1;
- (id)initWithTargetID:(id)arg1 session:(id)arg2;

@end

