//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNVideoExporter, NSError, NSString, NSURL;

@protocol MNVideoExporterDelegate <NSObject>
- (void)videoExporter:(MNVideoExporter *)arg1 didDownloadWithProgress:(float)arg2;
- (void)videoExporter:(MNVideoExporter *)arg1 didFailWithError:(NSError *)arg2;
- (void)videoExporter:(MNVideoExporter *)arg1 didFinishExportingToFile:(NSString *)arg2 fromContentUrl:(NSURL *)arg3;
@end
