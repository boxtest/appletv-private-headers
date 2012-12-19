/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

#import <NSObject.h> // Unknown library


@interface AWDServerConnection : NSObject {
}
- (id)initWithComponentId:(unsigned long)componentId;	// 0x36682141
- (id)initWithComponentId:(unsigned long)componentId andBlockOnConfiguration:(BOOL)configuration;	// 0x36682251
- (void)dealloc;	// 0x36682369
- (unsigned long long)getAWDTimestamp;	// 0x366827c5
- (id)newMetricContainerWithIdentifier:(unsigned long)identifier;	// 0x36682471
- (BOOL)registerQueriableMetricCallback:(id)callback forIdentifier:(unsigned long)identifier;	// 0x366826a1
- (BOOL)registerQueriableMetricCallbackForLogging:(id)logging;	// 0x36682735
- (BOOL)submitMetric:(id)metric;	// 0x36682561
@end
