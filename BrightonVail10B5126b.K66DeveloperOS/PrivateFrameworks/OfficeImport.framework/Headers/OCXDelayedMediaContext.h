/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedMediaContext.h"
#import <NSObject.h> // Unknown library

@class OCPPackage, NSURL;

@interface OCXDelayedMediaContext : NSObject <OCDDelayedMediaContext> {
	OCPPackage *mPackage;	// 4 = 0x4
	NSURL *mTargetLocation;	// 8 = 0x8
}
- (id)initWithTargetLocation:(id)targetLocation package:(id)package;	// 0x348ea39d
- (void)dealloc;	// 0x348fc665
- (bool)loadDelayedNode:(id)node;	// 0x34a68051
- (bool)saveDelayedMedia:(id)media toFile:(id)file;	// 0x34a68055
@end

