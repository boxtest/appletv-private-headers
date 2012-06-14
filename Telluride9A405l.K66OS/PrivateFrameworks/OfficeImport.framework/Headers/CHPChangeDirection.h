/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDProcessor.h"


__attribute__((visibility("hidden")))
@interface CHPChangeDirection : EDProcessor {
}
- (void)addDataValue:(id)value to:(id)to withIndex:(int)index;	// 0x30dce3d9
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x30dcd4c9
- (void)changeChartDirection:(id)direction sheet:(id)sheet;	// 0x30dcd4d9
- (void)cleanUpOldSeriesCollection:(id)collection;	// 0x30dced6d
- (id)createNewSeriesCollectionForOrthogonalDirection:(id)orthogonalDirection forChart:(id)chart;	// 0x30dcd7fd
- (id)getGraphicPropertiesForSeriesWithIndex:(int)index fromCollection:(id)collection isVaryColors:(bool)colors forChart:(id)chart;	// 0x30dcdcb1
- (id)getSeriesCollectionForOrthogonalDirection:(id)orthogonalDirection forChart:(id)chart;	// 0x30dcd79d
- (bool)isObjectSupported:(id)supported;	// 0x30d51bd9
- (void)mapSeriesCollection:(id)collection from:(id)from forChart:(id)chart;	// 0x30dcdef1
- (void)mapSeriesValues:(id)values to:(id)to forIndex:(unsigned)index byRow:(bool)row forChart:(id)chart;	// 0x30dce415
@end
