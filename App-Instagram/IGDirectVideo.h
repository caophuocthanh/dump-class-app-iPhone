//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContent.h"

#import "NSCoding.h"

@class IGPhoto, IGVideo;

@interface IGDirectVideo : IGDirectContent <NSCoding>
{
    IGVideo *_video;
    IGPhoto *_photo;
}

@property(retain, nonatomic) IGPhoto *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) IGVideo *video; // @synthesize video=_video;
- (void).cxx_destruct;
- (id)description;
- (id)digestDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
