//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class MNPhotoViewModel, NSDate, NSString, NSURL;

@interface MNVideoViewModel : FBValueObject <NSCopying>
{
    NSString *_videoId;
    NSURL *_src;
    MNPhotoViewModel *_thumbnailPhotoViewModel;
    float _width;
    float _height;
    NSString *_creatorId;
    NSDate *_createdTime;
}

@property(readonly, copy, nonatomic) NSDate *createdTime; // @synthesize createdTime=_createdTime;
@property(readonly, copy, nonatomic) NSString *creatorId; // @synthesize creatorId=_creatorId;
@property(readonly, nonatomic) float height; // @synthesize height=_height;
@property(readonly, nonatomic) float width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) MNPhotoViewModel *thumbnailPhotoViewModel; // @synthesize thumbnailPhotoViewModel=_thumbnailPhotoViewModel;
@property(readonly, copy, nonatomic) NSURL *src; // @synthesize src=_src;
@property(readonly, copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (id)initWithVideoId:(id)arg1 src:(id)arg2 thumbnailPhotoViewModel:(id)arg3 width:(float)arg4 height:(float)arg5 creatorId:(id)arg6 createdTime:(id)arg7;

@end
