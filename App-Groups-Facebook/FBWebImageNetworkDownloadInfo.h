//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBWebImageNetworkDownloadInfo : NSObject
{
    id _downloadToken;
    CDUnknownBlockType _downloadBlock;
}

@property(copy, nonatomic) CDUnknownBlockType downloadBlock; // @synthesize downloadBlock=_downloadBlock;
@property(retain, nonatomic) id downloadToken; // @synthesize downloadToken=_downloadToken;
- (void).cxx_destruct;
- (id)initWithDownloadBlock:(CDUnknownBlockType)arg1;

@end

