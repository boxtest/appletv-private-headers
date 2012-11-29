/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

#import <NSObject.h> // Unknown library


@interface AWDServerConnection : NSObject {
}
- (id)initWithComponentId:(unsigned long)componentId;	// 0x329e4be1
- (id)initWithComponentId:(unsigned long)componentId andBlockOnConfiguration:(BOOL)configuration;	// 0x329e4cf1
- (void)dealloc;	// 0x329e4e09
- (unsigned long long)getAWDTimestamp;	// 0x329e5265
- (id)newMetricContainerWithIdentifier:(unsigned long)identifier;	// 0x329e4f11
- (BOOL)registerQueriableMetricCallback:(id)callback forIdentifier:(unsigned long)identifier;	// 0x329e5141
- (BOOL)registerQueriableMetricCallbackForLogging:(id)logging;	// 0x329e51d5
- (BOOL)submitMetric:(id)metric;	// 0x329e5001
@end
