//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContentUpload.h"

#import "NSCoding.h"

@class NSString;

@interface IGDirectContentMediaReshareUpload : IGDirectContentUpload <NSCoding>
{
    NSString *_mediaId;
    int _mediaType;
}

@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

