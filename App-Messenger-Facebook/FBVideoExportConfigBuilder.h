//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBEncoderConfig, NSDictionary;

@interface FBVideoExportConfigBuilder : NSObject
{
    BOOL _performStandardization;
    NSDictionary *_videoCompressionSettings;
    NSDictionary *_audioCompressionSettings;
    unsigned int _maxAvgVideoBitrateSD;
    unsigned int _maxAvgVideoBitrateHD;
    unsigned int _preferredResolution;
    FBEncoderConfig *_encoderConfig;
}

+ (id)videoExportConfigFromExistingVideoExportConfig:(id)arg1;
+ (id)videoExportConfig;
- (void).cxx_destruct;
- (id)withEncoderConfig:(id)arg1;
- (id)withPreferredResolution:(unsigned int)arg1;
- (id)withMaxAvgVideoBitrateHD:(unsigned int)arg1;
- (id)withMaxAvgVideoBitrateSD:(unsigned int)arg1;
- (id)withAudioCompressionSettings:(id)arg1;
- (id)withVideoCompressionSettings:(id)arg1;
- (id)withPerformStandardization:(BOOL)arg1;
- (id)build;

@end
