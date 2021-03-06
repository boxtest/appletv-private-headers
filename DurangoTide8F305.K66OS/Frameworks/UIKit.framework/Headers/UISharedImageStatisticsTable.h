/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UISharedImageStatisticsTable : NSObject {
@private
	NSMutableDictionary *_statistics;	// 4 = 0x4
}
- (id)init;	// 0x3222bb39
- (id)allImageNames;	// 0x3222ba15
- (void)clearStatistics;	// 0x3222bad1
- (void)dealloc;	// 0x3222baf1
- (void)noteImageWithNameWasFlushed:(id)nameWasFlushed;	// 0x3222ba35
- (void)noteImageWithNameWasRequested:(id)nameWasRequested;	// 0x3222bb95
- (id)statisticsForImageWithName:(id)name;	// 0x3222b9ed
@end

