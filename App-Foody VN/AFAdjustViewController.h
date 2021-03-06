//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFToolViewController.h"

#import "AFSegmentedControlDelegate.h"

@class AFAdjustProcessor, NSString;

@interface AFAdjustViewController : AFToolViewController <AFSegmentedControlDelegate>
{
    BOOL _requiresFurtherProcessing;
    BOOL _currentlyProcessing;
    AFAdjustProcessor *_processor;
}

@property(nonatomic, getter=isCurrentlyProcessing) BOOL currentlyProcessing; // @synthesize currentlyProcessing=_currentlyProcessing;
@property(nonatomic) BOOL requiresFurtherProcessing; // @synthesize requiresFurtherProcessing=_requiresFurtherProcessing;
@property(readonly, nonatomic) AFAdjustProcessor *processor; // @synthesize processor=_processor;
- (void).cxx_destruct;
- (void)reportApplied;
- (id)keyForProcessorType:(int)arg1;
- (id)outputProcessor;
- (void)renderPreview;
- (float)valueForProcessorType:(int)arg1;
- (void)setValue:(float)arg1 forProcessorType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

