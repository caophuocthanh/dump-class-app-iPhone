//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NRMAConsumerProtocol.h"

@class NRMAThreadInfo, NRMATraceMachine, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface NRMATrace : NSObject <NRMAConsumerProtocol>
{
    BOOL _persistent;
    BOOL _ignoreNode;
    NSString *_name;
    NSString *_classLabel;
    NSString *_methodLabel;
    NRMAThreadInfo *_threadInfo;
    NSMutableDictionary *_parameters;
    NSMutableSet *_children;
    NRMATraceMachine *_traceMachine;
    NSMutableArray *_scopedMeasurements;
    int _category;
    double _entryTimestamp;
    double _exitTimestamp;
    double _exclusiveTimeMillis;
    double _networkTimeMillis;
}

@property(nonatomic) BOOL ignoreNode; // @synthesize ignoreNode=_ignoreNode;
@property(nonatomic) int category; // @synthesize category=_category;
@property(readonly, nonatomic) double networkTimeMillis; // @synthesize networkTimeMillis=_networkTimeMillis;
@property(readonly, nonatomic) double exclusiveTimeMillis; // @synthesize exclusiveTimeMillis=_exclusiveTimeMillis;
@property(retain, nonatomic) NSMutableArray *scopedMeasurements; // @synthesize scopedMeasurements=_scopedMeasurements;
@property __weak NRMATraceMachine *traceMachine; // @synthesize traceMachine=_traceMachine;
@property(retain, nonatomic) NSMutableSet *children; // @synthesize children=_children;
@property(nonatomic) BOOL persistent; // @synthesize persistent=_persistent;
@property(retain, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NRMAThreadInfo *threadInfo; // @synthesize threadInfo=_threadInfo;
@property(retain, nonatomic) NSString *methodLabel; // @synthesize methodLabel=_methodLabel;
@property(retain, nonatomic) NSString *classLabel; // @synthesize classLabel=_classLabel;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) double exitTimestamp; // @synthesize exitTimestamp=_exitTimestamp;
@property(nonatomic) double entryTimestamp; // @synthesize entryTimestamp=_entryTimestamp;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)consumeMeasurements:(id)arg1;
- (void)consumeMeasurement:(id)arg1;
- (int)measurementType;
- (double)durationInSeconds;
- (id)metricName;
- (void)complete;
- (void)calculateExclusiveTime;
- (void)addChild:(id)arg1;
- (id)initWithName:(id)arg1 traceMachine:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

