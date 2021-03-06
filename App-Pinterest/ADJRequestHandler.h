//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADJRequestHandler.h"

@class NSURL;

@interface ADJRequestHandler : NSObject <ADJRequestHandler>
{
    struct dispatch_queue_s *_internalQueue;
    id <ADJPackageHandler> _packageHandler;
    id <ADJLogger> _logger;
    NSURL *_baseUrl;
}

+ (id)handlerWithPackageHandler:(id)arg1;
@property(retain, nonatomic) NSURL *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(nonatomic) id <ADJLogger> logger; // @synthesize logger=_logger;
@property(nonatomic) id <ADJPackageHandler> packageHandler; // @synthesize packageHandler=_packageHandler;
@property(nonatomic) struct dispatch_queue_s *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void).cxx_destruct;
- (id)bodyForParameters:(id)arg1;
- (id)requestForPackage:(id)arg1;
- (void)sendInternal:(id)arg1;
- (void)sendPackage:(id)arg1;
- (id)initWithPackageHandler:(id)arg1;

@end

