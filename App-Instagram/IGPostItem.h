//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class IGPhoto, IGVideo, NSString, NSURL;

@interface IGPostItem : NSObject <NSCoding>
{
    NSString *_pk;
    int _mediaType;
    IGPhoto *_photo;
    IGVideo *_video;
    NSURL *_link;
}

@property(readonly, nonatomic) NSURL *link; // @synthesize link=_link;
@property(readonly, nonatomic) IGVideo *video; // @synthesize video=_video;
@property(readonly, nonatomic) IGPhoto *photo; // @synthesize photo=_photo;
@property(readonly, nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (id)description;
- (void)setMediaType:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 photo:(id)arg2 video:(id)arg3 link:(id)arg4 pk:(id)arg5;
- (id)initWithFeedDictionary:(id)arg1;

@end

