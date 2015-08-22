//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBWebRTCEndCallInfo, NSArray, NSString;

@interface FBWebRTCCallSurvey : NSObject
{
    BOOL _cancelled;
    BOOL _showVideo;
    NSString *_title;
    NSString *_additionalFeedback;
    FBWebRTCEndCallInfo *_endCallInfo;
    NSArray *_audioOptions;
    NSArray *_videoOptions;
    unsigned int _selectedIndex;
}

@property(nonatomic) unsigned int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) BOOL showVideo; // @synthesize showVideo=_showVideo;
@property(copy, nonatomic) NSArray *videoOptions; // @synthesize videoOptions=_videoOptions;
@property(copy, nonatomic) NSArray *audioOptions; // @synthesize audioOptions=_audioOptions;
@property(retain, nonatomic) FBWebRTCEndCallInfo *endCallInfo; // @synthesize endCallInfo=_endCallInfo;
@property(nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) NSString *additionalFeedback; // @synthesize additionalFeedback=_additionalFeedback;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)loadVideoSurveyOptions;
- (id)loadVoiceSurveyOptions;
- (void)insertSurveyOptionIntoArray:(id)arg1 withContent:(id)arg2 andKey:(id)arg3;
- (id)currentSurveyOptions;
- (void)submit;
- (BOOL)optionRequiresAdditionalFeedback:(unsigned int)arg1;
- (id)selectedOption;
- (BOOL)hasSelectedOption;
- (BOOL)optionIsSelected:(unsigned int)arg1;
- (void)selectOptionAtIndex:(unsigned int)arg1;
- (id)optionAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)useVideoOptions;
- (id)init;

@end
