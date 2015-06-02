// -*- mode: c++; indent-tabs-mode: nil; -*-
//
// Starka
// Copyright (c) 2009-2014 Illumina, Inc.
//
// This software is provided under the terms and conditions of the
// Illumina Open Source Software License 1.
//
// You should have received a copy of the Illumina Open Source
// Software License 1 along with this program. If not, see
// <https://github.com/sequencing/licenses/>
//
#pragma once
#include "gvcf_locus_info.hh"


class variant_processor
{
public:
    // process the SNV.
    virtual void process(site_info& si) = 0;

    // process the indel.
    virtual void process(indel_info& ii) = 0;
};
