//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIProgressView;

@interface UserCoverUploadItem : NSObject
{
    unsigned int _status;
    UIProgressView *_progressView;
    NSString *_name;
    NSString *_extension;
    NSString *_path;
}

@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
- (void).cxx_destruct;

@end
