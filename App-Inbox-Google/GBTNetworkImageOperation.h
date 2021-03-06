//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, NSString, UIImage;

@interface GBTNetworkImageOperation : NSOperation
{
    BOOL executing_;
    BOOL finished_;
    UIImage *image_;
    NSString *imageUrl_;
    id <GBTNetworkImageOperationDelegate> _delegate;
    NSArray *_allowedInsecureImageURLSchemes;
}

@property(retain, nonatomic) NSArray *allowedInsecureImageURLSchemes; // @synthesize allowedInsecureImageURLSchemes=_allowedInsecureImageURLSchemes;
@property(nonatomic) __weak id <GBTNetworkImageOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=imageUrl_;
- (void).cxx_destruct;
- (void)cleanup;
- (void)start;
@property(nonatomic, getter=isFinished) BOOL finished;
@property(nonatomic, getter=isExecuting) BOOL executing;
- (BOOL)isConcurrent;
- (id)initWithImageUrl:(id)arg1;

@end

