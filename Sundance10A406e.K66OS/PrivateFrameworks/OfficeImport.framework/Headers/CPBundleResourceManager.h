/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSMutableDictionary;

@interface CPBundleResourceManager : NSObject {
	NSMutableDictionary *mPackageMap;	// 4 = 0x4
}
+ (void)disposeInstance;	// 0x350509fd
+ (id)instance;	// 0x34f92c9d
- (id)init;	// 0x34f92d89
- (id)dataForResource:(id)resource ofType:(id)type inPackage:(id)package;	// 0x35050b15
- (void)dealloc;	// 0x35050ac9
- (id)packageWithName:(id)name;	// 0x34f92ea1
- (xmlDoc *)xmlDocumentForResource:(id)resource ofType:(id)type inPackage:(id)package;	// 0x34f92ded
@end
