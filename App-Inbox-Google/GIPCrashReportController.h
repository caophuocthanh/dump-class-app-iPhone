//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface GIPCrashReportController : NSObject
{
    NSString *appName_;
    NSString *appVersion_;
    NSString *reportsPath_;
    NSMutableArray *crashReportsStorage_;
    BOOL isRunning_;
    BOOL sendOnCrash_;
    BOOL sendOnException_;
    BOOL attachLogs_;
    unsigned int logsInterval_;
    BOOL finishPump_;
    BOOL logOnSimulator_;
    id <GIPCrashReportHandlerProtocol> crashHandler_;
    id <GIPCrashReportControllerDelegate> delegate_;
    NSMutableArray *storedCrashReports_;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL isRunning; // @synthesize isRunning=isRunning_;
@property(nonatomic) BOOL logOnSimulator; // @synthesize logOnSimulator=logOnSimulator_;
@property(nonatomic) unsigned int logsInterval; // @synthesize logsInterval=logsInterval_;
@property(nonatomic) BOOL attachLogs; // @synthesize attachLogs=attachLogs_;
@property(nonatomic) BOOL sendOnException; // @synthesize sendOnException=sendOnException_;
@property(nonatomic) BOOL sendOnCrash; // @synthesize sendOnCrash=sendOnCrash_;
@property(copy, nonatomic) NSString *reportsPath; // @synthesize reportsPath=reportsPath_;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=appVersion_;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=appName_;
@property(nonatomic) id <GIPCrashReportControllerDelegate> delegate; // @synthesize delegate=delegate_;
- (id)parseEpochDate:(id)arg1;
- (void)pumpRunLoop;
- (void)deleteStoredCrashReports;
- (void)crashReportProcesed:(id)arg1;
- (void)logCrashes:(id)arg1;
- (void)logCrash:(id)arg1;
- (void)sendStoredCrashReports;
- (void)sendCrash;
- (void)sendCrashes:(id)arg1;
- (void)sendCrash:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)storedCrashReports;
- (id)loadStoredCrashReports;
- (id)latestLogs;
- (id)callStack;
- (void)handleException:(id)arg1;
- (void)handleSignal:(int)arg1;
- (void)stop;
- (void)start;
- (void)unregisterHandler:(id)arg1;
- (void)registerHandler:(id)arg1;
- (void)dealloc;
- (id)init;

@end

