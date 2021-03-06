//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRDirectoryTree, CRSequenceNumber, NSDictionary, NSMutableDictionary, NSString;

@interface CRTransactionReporter : NSObject
{
    struct dispatch_queue_s *queue;
    struct dispatch_group_s *group;
    BOOL canResume;
    int finishedCount;
    BOOL batching;
    BOOL _isForegrounded;
    BOOL _isLoaded;
    BOOL _shuttingdown;
    NSDictionary *_appState;
    NSDictionary *_thresholds;
    CRDirectoryTree *_directoryTree;
    int _transactionCounter;
    CRSequenceNumber *_normalCounter;
    NSMutableDictionary *_transactionsDictionary;
    NSString *_cr_endTimeString;
    double _defaultTimeout;
    double _endTime;
    double _interval;
}

+ (id)sharedInstance;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(copy, nonatomic) NSString *cr_endTimeString; // @synthesize cr_endTimeString=_cr_endTimeString;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSMutableDictionary *transactionsDictionary; // @synthesize transactionsDictionary=_transactionsDictionary;
@property(nonatomic) BOOL shuttingdown; // @synthesize shuttingdown=_shuttingdown;
@property(retain, nonatomic) CRSequenceNumber *normalCounter; // @synthesize normalCounter=_normalCounter;
@property(nonatomic) int transactionCounter; // @synthesize transactionCounter=_transactionCounter;
@property(nonatomic) CRDirectoryTree *directoryTree; // @synthesize directoryTree=_directoryTree;
@property(nonatomic) BOOL isLoaded; // @synthesize isLoaded=_isLoaded;
@property(readonly, nonatomic) NSDictionary *thresholds; // @synthesize thresholds=_thresholds;
@property(readonly, nonatomic) double defaultTimeout; // @synthesize defaultTimeout=_defaultTimeout;
@property(retain, nonatomic) NSDictionary *appState; // @synthesize appState=_appState;
- (void).cxx_destruct;
- (void)autoTransaction:(id)arg1 withBeginTime:(double)arg2 withEndTime:(double)arg3;
- (void)disableSampling;
- (void)enableSamplingWithFrequency:(id)arg1 withDefaultTimeout:(double)arg2 withThresholds:(id)arg3;
- (id)crashedTransactions:(id)arg1;
@property(readonly, nonatomic) BOOL isForegrounded; // @synthesize isForegrounded=_isForegrounded;
- (void)handleNotification:(id)arg1;
- (void)foregroundBackgroundCheck:(id)arg1;
- (void)backgrounded;
- (void)foregrounded;
- (void)background;
- (void)foreground;
- (void)removeTransaction:(id)arg1;
- (void)addTransaction:(id)arg1;
- (id)transactionForName:(id)arg1;
- (id)transactionForId:(int)arg1;
- (unsigned int)transactionCount;
- (id)allTransactions;
- (void)move:(id)arg1 fromDirectory:(id)arg2 toDirectory:(id)arg3;
- (void)remove:(id)arg1 fromDirectory:(id)arg2;
- (void)save:(id)arg1;
- (id)path:(id)arg1 forDirectory:(id)arg2;
- (id)path:(id)arg1;
- (id)crashTransactionsOnPluginException;
- (id)crashedJSONFrom:(id)arg1;
- (void)resume;
- (void)resumeFirstTime;
- (void)load;
- (void)normalDelivery;
- (void)normalWork;
- (void)normalBatch;
- (void)normalBatchBarrier;
- (void)normalReport;
- (double)normalReportEndTimeFor:(id)arg1;
- (double)normalReportBeginTimeFor:(id)arg1;
- (id)normalReportTransactions;
- (id)normalJSONFrom:(id)arg1;
- (BOOL)normalWorkToDo;
- (BOOL)normalWorkInNormalDirectoryToDo;
- (int)newTransactionId;
- (void)initCounters;
- (void)dealloc;
- (void)reset;
- (id)init;
- (void)initConfiguration;
- (void)initNotifications;
- (void)initQueue;
- (void)cr_setEndTime:(double)arg1;

@end

