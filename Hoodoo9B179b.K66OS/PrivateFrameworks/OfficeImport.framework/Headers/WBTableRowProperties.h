/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WBTableRowProperties : NSObject {
}
+ (void)mapProperties:(id)properties toWordProperties:(WrdTableProperties *)wordProperties;	// 0x329a273d
+ (void)mapWordProperties:(WrdTableProperties *)properties toProperties:(id)properties2;	// 0x32874071
+ (void)readFrom:(id)from wrdProperties:(WrdTableProperties *)properties tracked:(WrdTableProperties *)tracked properties:(id)properties4;	// 0x32873f2d
@end

