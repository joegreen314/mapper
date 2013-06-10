//
//  MapperViewController.h
//  Mapper
//
//  Created by Joe Green on 6/6/13.
//  Copyright (c) 2013 Digilog. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "KMLParser.h"

@interface MapperViewController : UIViewController{
    KMLParser *kmlParser;
    IBOutlet MKMapView *map;
}

@end
